// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_02098e24: full 0x44 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
extern "C" {
extern void FUN_0206557c(int, void *, int);
struct Obj_02098e24 {
    int type;
    int f4;
    int f8;
};
typedef void (Obj_02098e24::*mfp_t)(int, int);
extern struct {
    mfp_t fn;
    int pad[4];
} D_020fb200[];

void FUN_02098e24(Obj_02098e24 *a, int b, int c) {
    a->f8 = 0;
    FUN_0206557c(0, &a->f4, 4);
    if (D_020fb200[a->type].fn != 0) {
        (a->*D_020fb200[a->type].fn)(b, c);
    }
}
}
