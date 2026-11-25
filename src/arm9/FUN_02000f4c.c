// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -noThumb
struct S {
    int f0;
    unsigned int f4;
    char pad[0x10];
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    char pad2[0x14];
    int (*f40)(int, int, int *, int);
    int f44;
    int f48;
};

extern void FUN_02000f18(int, int *);
extern void FUN_02000f1c(struct S *);

int FUN_02000f4c(struct S *r5, int *r4) {
    int diff = r5->f24 - r5->f1c;
    if (diff != 0) {
        int res;
        r5->f28 = diff;
        if (!((r5->f4 << 19) >> 31)) {
            FUN_02000f18(r5->f1c, &r5->f28);
        }
        res = r5->f40(r5->f0, r5->f1c, &r5->f28, r5->f48);
        if (r4 != 0) {
            *r4 = r5->f28;
        }
        if (res != 0) {
            return res;
        }
        r5->f18 += r5->f28;
    }
    FUN_02000f1c(r5);
    return 0;
}
