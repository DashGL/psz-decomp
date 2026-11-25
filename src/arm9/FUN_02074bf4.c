// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_02074bf4: full 0x50 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct Sub_02074bf4 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual int v18();
};
extern "C" void FUN_020736b8(void);
extern "C" void FUN_02074c4c(void *);
extern "C" void FUN_02074c80(void *);
extern "C" void FUN_02074cb8(void *);

extern "C" void FUN_02074bf4(char *a) {
    if (*(Sub_02074bf4 **)(a + 0x24) != 0) {
        (*(Sub_02074bf4 **)(a + 0x24))->v0c();
        *(int *)(a + 0x2c) = (*(Sub_02074bf4 **)(a + 0x24))->v18();
        FUN_020736b8();
        switch (*(unsigned int *)(a + 0x20)) {
        case 0:
            FUN_02074c4c(a);
            break;
        case 1:
            FUN_02074c80(a);
            break;
        case 2:
            FUN_02074cb8(a);
            break;
        case 3:
            break;
        }
    }
}
