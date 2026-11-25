//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02084d00(void *);
extern void *FUN_02086a1c(int);
extern int FUN_02086a90(void *);
extern void FUN_overlay_20__0219868c(void *, int);
extern int DAT_0211a51c[];
extern int DAT_020fc988;
}
struct Cfg { int pad[3]; int val; };
extern "C" Cfg DAT_0219f984;
extern "C" void FUN_overlay_20__0219a054(int *self) {
    if (FUN_02084d00(DAT_0211a51c)) {
        if (!FUN_02086a1c(self[48]) || ((self[46] <= DAT_020fc988) ? 1 : 0)) {
            void *owner = (void *)self[1];
            int index = FUN_02086a90(owner);
            if (index != -1) {
                FUN_overlay_20__0219868c(owner, index);
                self[46] = DAT_0219f984.val;
            }
        }
    }
}
