// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0[3];
    int fc;
} Sub_9fa44;
extern void *FUN_02031a74(void);
extern Sub_9fa44 *FUN_02031c88(void *);
unsigned int FUN_0209fa44(char *a) {
    unsigned int r4 = 0;
    Sub_9fa44 *s = FUN_02031c88(FUN_02031a74());
    if (s != 0) {
        switch (s->fc) {
        case 0:
            r4 = 0;
            break;
        case 1:
            r4 = 0x2000;
            break;
        case 2:
            r4 = 0x4000;
            break;
        case 3:
            r4 = 0x6000;
            break;
        case 4:
            r4 = 0x8000;
            break;
        case 5:
            r4 = 0xa000;
            break;
        case 6:
            r4 = 0xc000;
            break;
        case 7:
            r4 = 0xe000;
            break;
        case 8:
            break;
        }
    }
    if (*(unsigned int *)(a + 0x38) > r4) {
        r4 += 0x10000;
    }
    return r4;
}
