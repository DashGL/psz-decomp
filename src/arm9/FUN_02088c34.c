// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_02088c34: full 0x48 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct Sub_02088c34 {
    virtual ~Sub_02088c34();
};
extern "C" void FUN_020c38f0(void *, int);
extern "C" void *FUN_020c1fc8(void);
extern "C" void FUN_020c2624(void *, void *);

extern "C" void *FUN_02088c34(char *a) {
    FUN_020c38f0(*(void **)(a + 0x30), 0);
    FUN_020c38f0(*(void **)(a + 0x34), 0);
    if (*(Sub_02088c34 **)(a + 0x30) != 0) {
        delete *(Sub_02088c34 **)(a + 0x30);
        *(Sub_02088c34 **)(a + 0x30) = 0;
    }
    if (*(Sub_02088c34 **)(a + 0x34) != 0) {
        delete *(Sub_02088c34 **)(a + 0x34);
        *(Sub_02088c34 **)(a + 0x34) = 0;
    }
    FUN_020c2624(FUN_020c1fc8(), a + 0x20);
    return a;
}
