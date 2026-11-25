// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    char pad[0x74];
} Elem_dce04;
extern char *DAT_0211dbc8;
extern void FUN_020656b8(void *, int, int);
extern int FUN_020dcd94(int, Elem_dce04 *);
int FUN_020dce04(Elem_dce04 *a) {
    int i;
    int r4;
    if (*(int *)(DAT_0211dbc8 + 0x1a90) != 2) {
        return -1;
    }
    FUN_020656b8(a, 0, 0x780);
    for (i = 0; i < 0x10; i++) {
        a[i].f0 = 0;
    }
    for (r4 = 0; r4 < *(int *)(DAT_0211dbc8 + 0x1a88); r4++) {
        if (FUN_020dcd94(r4, &a[r4]) == -1) {
            break;
        }
    }
    return 0;
}
