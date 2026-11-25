// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,s
struct R4 {
    char pad[0xd0c];
    unsigned char v : 4;
};
extern struct R4 *FUN_020dac74(int);
extern int FUN_020dc718(void *);
extern int FUN_020dc6ac(void *);
int FUN_020daf6c(char *a) {
    struct R4 *r4 = FUN_020dac74(0x10);
    if ((r4->v == 0 || r4->v == 4) && (unsigned char)((*(unsigned short *)(a + 0x2c) >> 4) & 1) == 1) {
        if (FUN_020dc718(a + 0xc) == 1) {
            return 6;
        }
    }
    if ((r4->v == 0 || r4->v == 5) && (unsigned char)((*(unsigned short *)(a + 0x2c) >> 4) & 1) == 1) {
        if (FUN_020dc6ac(a + 0xc) == 1) {
            return 7;
        }
    }
    return -1;
}
