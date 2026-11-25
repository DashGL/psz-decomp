// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0xc0];
    unsigned char fc0;
    char pad2[7];
    unsigned char fc8;
    unsigned char fc9;
    unsigned char fca;
    unsigned char fcb;
    unsigned char fcc[0x34];
} Sub_dc648;
typedef struct {
    Sub_dc648 sub[13];
    char pad[0xd];
    unsigned char fd0d;
} S_dc648;
extern int FUN_020dada0(unsigned int);
extern int FUN_020dc5c8(void *);
extern void FUN_02028398(int *, int *);
void FUN_020dc648(S_dc648 *a) {
    int sp4;
    int sp0;
    if (a->fd0d < 6) {
        int idx = FUN_020dada0(a->fd0d);
        int sum = a->sub[idx].fc8 + a->sub[idx].fc9 + a->sub[idx].fca + a->sub[idx].fcb;
        if (a->sub[idx].fc0 == 0 && sum != 0) {
            sp4 = FUN_020dc5c8(&a->sub[idx].fc8);
            sp0 = FUN_020dc5c8(&a->sub[idx].fcc);
            FUN_02028398(&sp4, &sp0);
        }
    }
}
