// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
extern void FUN_020552d4(void *, u16, void *);
extern void FUN_020553a0(void *, int);
extern u32 FUN_020683d4(void);
extern void FUN_020683e8(u32);

void FUN_020550b4(char *event) {
    char *ring = *(char **)(event + 28);
    if (!ring)
        return;
    if (*(u16 *)(event + 2) == 0) {
        switch (*(u16 *)(event + 4)) {
        case 21:
            FUN_020552d4(ring, *(u16 *)(event + 18), *(void **)(event + 12));
            FUN_020553a0(ring, 0);
            break;
        case 7:
            FUN_020553a0(ring, 0);
            break;
        case 25:
            break;
        case 9:
        case 26: {
            
        u16 peer = *(u16 *)(event + 18);
        u32 bit = 1u << peer;
        u32 irq = FUN_020683d4();
        u32 index = *(u16 *)(ring + 2056);
        *(u16 *)(ring + 512 * index) &= ~bit;
        if (*(u16 *)(ring + 2072) == 1) {
            index = (u16)((index + 1) & 3);
            *(u16 *)(ring + 512 * index) &= ~bit;
        }
        FUN_020683e8(irq);
        FUN_020553a0(ring, 0);
        if (*(u16 *)(ring + 2072) == 1)
            FUN_020553a0(ring, 0);
    
            break;
        }
        }
    } else {
        *(u16 *)(ring + 2076) = 5;
    }
}
