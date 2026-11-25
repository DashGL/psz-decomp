// Verified 2026-11-13: full92-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// Evidence: notes/reference/resume2-root-20261112/FUN_0207c024-receiver-correction.json
// flags: -O4,s
typedef struct {
    const void *vt;
    char pad[0xe4];
    int fe8;
} Obj;
extern const void *D_020fa600;
extern void *D_02108cf4;
extern int FUN_0207c6f0(void *);
extern int FUN_02078188(int);
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern void FUN_0203c17c(void *);
extern void FUN_02047434(Obj *);
extern void FUN_020ba8ac(Obj *);
Obj *FUN_0207c024(Obj *a) {
    a->vt = &D_020fa600;
    if ((FUN_0207c6f0(a) == 0 ? 1 : 0) && FUN_02078188(a->fe8) != 0) {
        void *p = FUN_02039200(FUN_020352a4(D_02108cf4, a->fe8));
        if (p != 0) {
            FUN_0203c17c(p);
        }
    }
    FUN_02047434(a);
    FUN_020ba8ac(a);
    return a;
}
