// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_02097998: full 0x54 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Obj_02097998 {
    char pad[0x50];
    unsigned int f50;
};
typedef int (Obj_02097998::*mfp_t)(void);
extern "C" mfp_t D_020f4568[5];

extern "C" void FUN_02097998(Obj_02097998 *a) {
    for (int i = 0; i < 5; i++) {
        unsigned int mask = 1 << i;
        if (a->f50 & mask) {
            if (D_020f4568[i] != 0) {
                if ((a->*D_020f4568[i])() != 0) {
                    a->f50 &= ~mask;
                }
            }
        }
    }
}
