// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
extern u32 FUN_020683d4(void);
extern u16 FUN_02053494(void);
extern void FUN_020683e8(u32);
extern void FUN_020654b4(u32, void *, u32);
extern void FUN_02054fdc(void *);
extern int FUN_02054680(void (*)(void *), void *, void *, u16, u16, u16, u16);

typedef struct {
    u16 slots[4][256];
    u16 f800[4];
    u16 write_idx;
    u16 read_idx;
    u16 f80c;
    u16 mask;
    u16 f810;
    u16 f812;
    u16 f814;
    u16 f816;
    u16 mode;
    u16 f81a;
    u16 status;
} Ring;

void FUN_020553a0(Ring *ring, int local) {
    u32 irq = FUN_020683d4();
    if (ring->slots[ring->write_idx][0] == 0) {
        u16 peers = FUN_02053494();
        u16 old = ring->write_idx;
        u16 next = (u16)((old + 1) & 3);
        u16 clear = (ring->mode == 1) ? (u16)((next + 1) & 3) : next;
        int result;

        FUN_020654b4(0, ring->slots[clear], 0x200);
        ring->slots[clear][0] = (u16)(ring->mask & (peers | 1));
        ring->write_idx = next;
        ring->slots[old][0] = ring->mask;
        if (local == 1) {
            ring->slots[old][0] &= ~1u;
        }
        FUN_020683e8(irq);

        result = FUN_02054680(FUN_02054fdc, ring, ring->slots[old], ring->f814, (u16)(ring->mask & peers), ring->f816, 1);
        if (result == 7) {
            ring->f800[old] = 0xffff;
            ring->read_idx = (u16)((ring->read_idx + 1) & 3);
            return;
        }
        if (result != 0 && result != 2) {
            ring->status = 5;
        }
    } else {
        FUN_020683e8(irq);
    }
}
