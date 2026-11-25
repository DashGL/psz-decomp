// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_0209c4a4: full 0x54 bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Sub_0209c4a4 {
    virtual void v00();
    virtual void v04();
    virtual ~Sub_0209c4a4();
};
extern "C" void *D_02108c54;
extern "C" void FUN_02030da8(int *, int);
extern "C" char *FUN_02030a98(void *, int *);

extern "C" void *FUN_0209c4a4(Sub_0209c4a4 **a) {
    for (int i = 0; i < 4; i++) {
        if (a[i] != 0) {
            void *g = D_02108c54;
            int id;
            FUN_02030da8(&id, (int)a[i]);
            *FUN_02030a98(g, &id) = 0;
        }
    }
    for (unsigned short i = 0; i < 4; i++) {
        if (a[i] != 0) {
            delete a[i];
            a[i] = 0;
        }
    }
    return a;
}
