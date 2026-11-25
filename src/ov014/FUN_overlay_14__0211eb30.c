//cpp
// flags: -O4,s
extern "C" {
extern int FUN_020c4578(void *);
extern void FUN_overlay_14__0211eaa8(void *, void *, int);
extern void FUN_overlay_14__0211ea20(void *, void *, int);
void FUN_overlay_14__0211eb30(void *self, signed char *src) {
    if (FUN_020c4578(src)) return;
    int is_ascii = (*src == 1) ? 1 : 0;
    if (is_ascii) {
        FUN_overlay_14__0211eaa8(self, src + 2, 12);
    } else {
        FUN_overlay_14__0211ea20(self, src + 2, 6);
    }
}
}
