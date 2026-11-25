// FUN_02068948 @ 0x02068948 (0x118, arm) - ported from FUN_0202fb54 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef int BOOL;
typedef volatile unsigned short vu16;
typedef volatile unsigned int vu32;

#define reg_PXI_FIFO_CNT   (*(vu16 *)0x04000184)
#define reg_PXI_SEND_FIFO  (*(vu32 *)0x04000188)
#define reg_PXI_RECV_FIFO  (*(vu32 *)0x04100000)

typedef void (*PXIFifoCallback)(int tag, u32 data, BOOL err);
typedef union {
    struct { u32 tag:5; u32 err:1; u32 data:26; } e;
    u32 raw;
} PXIFifoMessage;

extern PXIFifoCallback G_02118524[];
extern u32 FUN_020683d4(void);                 /* interrupts off, returns prev */
extern void FUN_020683e8(u32 prev);            /* interrupts restore */

static inline int ReadFromFifo(u32 *buf)
{
    u32 en;
    if (reg_PXI_FIFO_CNT & 0x4000) {
        reg_PXI_FIFO_CNT |= 0xc000;
        return -3;
    }
    en = FUN_020683d4();
    if (reg_PXI_FIFO_CNT & 0x100) {
        FUN_020683e8(en);
        return -4;
    }
    *buf = reg_PXI_RECV_FIFO;
    FUN_020683e8(en);
    return 0;
}

static inline int SetToFifo(u32 data)
{
    u32 en;
    if (reg_PXI_FIFO_CNT & 0x4000) {
        reg_PXI_FIFO_CNT |= 0xc000;
        return -2;
    }
    en = FUN_020683d4();
    if (reg_PXI_FIFO_CNT & 2) {
        FUN_020683e8(en);
        return -1;
    }
    reg_PXI_SEND_FIFO = data;
    FUN_020683e8(en);
    return 0;
}

void FUN_02068948(void)
{
    PXIFifoMessage msg;
    int ret;
    int tag;

    while (1) {
        ret = ReadFromFifo(&msg.raw);
        if (ret == -4)
            break;
        if (ret == -3)
            continue;
        tag = msg.e.tag;
        if (tag) {
            if (G_02118524[tag]) {
                G_02118524[tag](tag, msg.e.data, (BOOL)msg.e.err);
            } else {
                if (msg.e.err) {
                } else {
                    msg.e.err = 1;
                    (void)SetToFifo(msg.raw);
                }
            }
        }
    }
}
