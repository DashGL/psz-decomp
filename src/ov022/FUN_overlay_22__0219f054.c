//cpp
// flags: -O4,s
extern "C" int FUN_02084bd4(void *);
extern "C" int FUN_02084d00(void *);
extern "C" void FUN_overlay_22__0219f088(void *, void *);
extern unsigned char DAT_0211a51c[];
extern "C" void FUN_overlay_22__0219f054(void *self, void *packet) {
    int local = (FUN_02084bd4(DAT_0211a51c) == 1 && FUN_02084d00(DAT_0211a51c) == 1) ? 1 : 0;
    if (!local) {
        FUN_overlay_22__0219f088(self, packet);
    }
}
