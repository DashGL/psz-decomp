// flags: -O4,p
#pragma thumb off
extern double FUN_02005340(const char *);
#pragma thumb on
extern void FUN_overlay_6__02120170(void *, int);

void FUN_overlay_6__0211f24c(char *self) {
    if (*(signed char *)(self + 96)) {
        double scaled;
        if (FUN_02005340(self + 96) > 0.0) {
            scaled = 0.5 + 4096.0 * FUN_02005340(self + 96);
        } else {
            scaled = 4096.0 * FUN_02005340(self + 96) - 0.5;
        }
        FUN_overlay_6__02120170(*(void **)(self + 672), (int)scaled);
    } else {
        FUN_overlay_6__02120170(*(void **)(self + 672), 8192);
    }
}
