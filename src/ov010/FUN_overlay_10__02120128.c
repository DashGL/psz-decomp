// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
// Full independent twin validation: notes/sessions/matching-continue-2026-11-12-twins.md
// twin of FUN_020af55c
struct Inner_overlay_10__02120128 {
    char pad[0x50];
    unsigned int f50;
    unsigned int f54;
};
struct Obj_overlay_10__02120128 {
    char pad[0x4];
    struct Inner_overlay_10__02120128 *f14;
};
extern void FUN_overlay_10__0212008c(int, int, int, int, int);
extern void *FUN_0205e1dc(void);
extern void *FUN_0205e40c(void);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
extern int FUN_020c1fc8(void);
extern void FUN_020c212c(int, int);

void FUN_overlay_10__02120128(struct Obj_overlay_10__02120128 *a) {
    unsigned int size;
    void *buffer;
    FUN_overlay_10__0212008c(0, 1, 0, 1, 0);
    size = a->f14->f50;
    buffer = FUN_0205e1dc();
    FUN_0206557c(0, buffer, size);
    size = a->f14->f54;
    buffer = FUN_0205e40c();
    FUN_0206557c(0, buffer, size);
    FUN_020c212c(FUN_020c1fc8(), 1);
}
