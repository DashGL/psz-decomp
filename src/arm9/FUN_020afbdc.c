// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    char pad[0x40];
    char *f40;
    int f44;
} S_afbdc;
extern int FUN_0205c520(int, int);
extern void FUN_02036348(void *, void *, void *);
extern void FUN_02036368(void *);
extern void FUN_02083a70(void *, int);
void FUN_020afbdc(void *a, S_afbdc *b) {
    int r4 = FUN_0205c520(b->f44, 0x800);
    FUN_02036348(a, b->f40 + 0xc, (char *)b + 0xc);
    if (r4 < 0xcd) {
        r4 = 0xcd;
    }
    if (r4 > 0x19a) {
        r4 = 0x19a;
    }
    FUN_02036368(a);
    if (b->f44 < 0x800) {
        FUN_02083a70(a, -r4);
    } else if (b->f44 > 0x800) {
        FUN_02083a70(a, r4);
    } else {
        FUN_02083a70(a, 0);
    }
}
