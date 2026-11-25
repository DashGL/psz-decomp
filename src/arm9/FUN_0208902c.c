// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_0208902c: full 0x48 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Obj_0208902c {
    unsigned char f0;
    unsigned char f1;
    char pad[0x22];
    int f24;
};
typedef void (Obj_0208902c::*mfp_t)(void);
struct Table_0208902c {
    mfp_t fn[3];
};
extern const Table_0208902c D_020f3f38;
extern "C" void FUN_02089c30(Obj_0208902c *);

extern "C" void FUN_0208902c(Obj_0208902c *a) {
    if (a->f1 == 0x11) {
        FUN_02089c30(a);
    } else {
        Table_0208902c tbl = D_020f3f38;
        (a->*tbl.fn[a->f24])();
    }
}
