//cpp
// flags: -O4,s
extern "C" void FUN_overlay_12__0212b19c(void *, int, int, int, void (*)(void), void (*)(void));
extern "C" void FUN_overlay_12__0212b000(void);
extern "C" void FUN_overlay_12__0212a934(void *);
extern "C" void FUN_overlay_12__02129ea4(void *);
extern "C" void FUN_overlay_12__0212ad7c(int *self) {
    FUN_overlay_12__0212b19c(self, 1, 1, -1, FUN_overlay_12__0212b000, 0);
    FUN_overlay_12__0212a934(self);
    int active = (self[115] != 0) ? 1 : 0;
    if (!active) {
        FUN_overlay_12__02129ea4(self);
    }
}
