// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI: notes/reference/resume2-root-20261112/input-020d2264.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0[2];
    int f8;
} Node_d2264;
extern char DAT_020fe708[];
extern char DAT_020fe710[];
extern char DAT_020fe714[];
extern int DAT_0211d094;
extern char *FUN_020d2198(void *, char *);
extern int FUN_02005898(char *);
extern int FUN_020d220c(int, int, int);
extern Node_d2264 *FUN_020c6e10(int, int);
extern void FUN_020d2524(int, int, int, char *, int);
void FUN_020d2264(void *a,int context) {
    int r4 = FUN_02005898(FUN_020d2198(a, DAT_020fe708));
    int r7 = FUN_02005898(FUN_020d2198(a, DAT_020fe710));
    char *r6 = FUN_020d2198(a, DAT_020fe714);
    int r5 = FUN_020d220c(0, r7, 0);
    if (r5 != -1) {
        FUN_020c6e10(DAT_0211d094, r5)->f8 = r4;
        FUN_020d2524(r5, r4 > 0 ? 1 : 0, 0, r6, 0);
    }
}
