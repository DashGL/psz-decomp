// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
struct S {
    char pad[0x3c];
    void *f3c;
};

struct G {
    char pad[0xfc];
    int ffc;
};

extern struct G *DAT_02108d04;
extern int DAT_0211a51c;
extern void FUN_020144f0(void);
extern void *FUN_02077930(void);
extern void FUN_02077b30(void *, void *);
extern void FUN_0208bfa8(struct S *);
extern void FUN_0208bddc(struct S *);
extern void FUN_0208bf7c(struct S *);
extern void *FUN_0208bda0(void);
extern void FUN_021299fc(void *, int, void *);
extern void FUN_02129998(void *, int, void *);
extern int FUN_02084be8(int *);
extern int FUN_02084cc8(int *);
extern int *FUN_02077f3c(void);
extern int FUN_02077fec(int *);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_0208c00c(struct S *);
extern void FUN_02014714(void);

void FUN_0208bd14(struct S *r4) {
    struct G *r5;
    FUN_020144f0();
    FUN_02077b30(FUN_02077930(), (char *)r4 + 0x24);
    FUN_0208bfa8(r4);
    FUN_0208bddc(r4);
    FUN_0208bf7c(r4);
    FUN_021299fc(FUN_0208bda0(), 1, (char *)r4 + 0x40);
    FUN_02129998(FUN_0208bda0(), 1, r4->f3c);
    r5 = DAT_02108d04;
    if (r5 != 0) {
        int ffc;
        if (FUN_02084be8(&DAT_0211a51c) != 0 || (ffc = r5->ffc, ffc == FUN_02084cc8(&DAT_0211a51c))) {
            FUN_020c331c(0x6a, 0x11000, 0xc5000, FUN_02077fec(FUN_02077f3c()));
        }
    }
    FUN_0208c00c(r4);
    FUN_02014714();
}
