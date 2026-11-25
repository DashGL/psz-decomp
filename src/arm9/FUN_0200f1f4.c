// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S {
    int f0;
    int f4;
    int f8;
    unsigned short fc;
};
extern int FUN_020124b4(int, unsigned short);
extern int FUN_0200f364(struct S *);
extern void FUN_02012504(int, int);

int FUN_0200f1f4(struct S *a) {
    if (FUN_020124b4(a->f0, a->fc) == 0) {
        return -1;
    }
    if (FUN_0200f364(a) != 0) {
        return a->fc - 1;
    }
    FUN_02012504(a->f0, 0);
    return -1;
}
