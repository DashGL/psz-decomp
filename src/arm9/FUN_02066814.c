// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int f0;
    int f4;
    char pad[0x5c];
    int f64;
} Obj;
typedef struct {
    char pad[0x1c];
    int f1c;
} Global;
extern Global D_0211817c;
extern void FUN_02066870(int);
extern void FUN_02066dd8(Obj *, void *, int);
extern void FUN_02066ea8(Obj *, int);
void FUN_02066814(Obj *a, int b) {
    if (D_0211817c.f1c != 0) {
        FUN_02066dd8(a, (void *)FUN_02066870, D_0211817c.f1c);
        a->f4 = b;
        a->f0 |= 0x80;
        a->f64 = 1;
        FUN_02066ea8(a, 1);
        return;
    }
    FUN_02066870(b);
}
