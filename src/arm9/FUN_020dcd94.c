// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    unsigned short f4;
    char f6[0x72];
} Out_dcd94;
extern char *DAT_0211dbc8;
extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(void *, void *, int);
int FUN_020dcd94(int a, Out_dcd94 *b) {
    if (*(int *)(DAT_0211dbc8 + 0x1a90) != 2) {
        return -1;
    }
    if (a < 0 || a >= *(int *)(DAT_0211dbc8 + 0x1a88)) {
        return -1;
    }
    FUN_020656b8(b, 0, 0x78);
    b->f0 = 1;
    b->f4 = *(unsigned short *)(DAT_0211dbc8 + a * 2 + 0x1a48);
    FUN_02065774(DAT_0211dbc8 + 0x1348 + a * 0x70, b->f6, 0x70);
    return 0;
}
