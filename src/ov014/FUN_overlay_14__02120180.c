// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// Full independent twin validation: notes/sessions/matching-continue-2026-11-12-twins.md
// twin of FUN_020a45f4
extern void FUN_overlay_14__021201cc(int, int, int, int, int);
extern void *FUN_0205e1dc(void);
extern void FUN_0206557c(int, void *, int);
extern void *FUN_0205e40c(void);
extern void *FUN_020c1fc8(void);
extern void FUN_020c212c(void *, int);

void FUN_overlay_14__02120180(char **a) {
    int sz;
    void *ptr;
    FUN_overlay_14__021201cc(0, 1, 0, 1, 0);
    sz = *(int *)(*a + 0x50);
    ptr = FUN_0205e1dc();
    FUN_0206557c(0, ptr, sz);
    sz = *(int *)(*a + 0x54);
    ptr = FUN_0205e40c();
    FUN_0206557c(0, ptr, sz);
    FUN_020c212c(FUN_020c1fc8(), 1);
    FUN_020c212c(FUN_020c1fc8(), 0);
}
