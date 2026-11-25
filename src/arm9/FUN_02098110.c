// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_02098110: full 0x44 bytes + relocation targets verified 2.0/sp2p3.
// ABI evidence: notes/sessions/matching-upper-continue-2026-11-12.md
//cpp
// flags: -O4,p
struct VObj_02098110 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18();
    virtual int v1c(void *, int *, int);
};
extern "C" int FUN_02078198(int);
extern "C" VObj_02098110 *FUN_020b7c38(int);
extern "C" int FUN_020983f8(void *, int);
extern "C" int FUN_020866b4(int, void *);

extern "C" int FUN_02098110(void *a, int b, int c, void *d) {
    int dummy;
    if (FUN_02078198(c) != 0) {
        VObj_02098110 *p = FUN_020b7c38(c);
        if (p != 0) {
            return p->v1c(d, &dummy, FUN_020983f8(a, b));
        }
        return 0;
    }
    return FUN_020866b4(c, d);
}
