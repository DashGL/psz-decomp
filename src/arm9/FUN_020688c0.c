// flags: -O4,p -noThumb
extern unsigned int FUN_020683d4(void);
extern void FUN_020683e8(unsigned int);

typedef union {
    struct {
        unsigned int tag : 5;
        unsigned int err : 1;
        unsigned int data : 26;
    } e;
    unsigned int raw;
} PXIFifoMessage;

typedef struct {
    volatile unsigned short cnt;
    volatile unsigned short pad;
    volatile unsigned int send;
} PXIRegs;

int FUN_020688c0(int channel, unsigned int data, int flag) {
    PXIFifoMessage fifomsg;
    unsigned int saved;

    fifomsg.e.tag = (unsigned int)channel;
    fifomsg.e.err = (unsigned int)flag;
    fifomsg.e.data = data;

    if (((PXIRegs *)0x04000184)->cnt & 0x4000) {
        ((PXIRegs *)0x04000184)->cnt |= 0xc000;
        return -1;
    }

    saved = FUN_020683d4();
    if (((PXIRegs *)0x04000184)->cnt & 2) {
        FUN_020683e8(saved);
        return -2;
    }

    ((PXIRegs *)0x04000184)->send = fifomsg.raw;
    FUN_020683e8(saved);
    return 0;
}
