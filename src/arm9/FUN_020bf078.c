//cpp
// flags: -O4,s
#pragma opt_common_subs off
extern "C" {
void FUN_020bf30c(void *);
void FUN_020bf278(void *, void *);
void FUN_020bf0b4(void *);
void FUN_020bf060(void *);
void *FUN_020bf12c(void);
}
extern "C" void FUN_020bf078(char *self) {
    int empty = (*(void **)(self + 12) == 0) ? 1 : 0;
    if (!empty) {
        if (*(void **)(self + 12)) {
            FUN_020bf30c(*(void **)(self + 12));
            FUN_020bf278(FUN_020bf12c(), *(void **)(self + 12));
            *(void **)(self + 12) = 0;
        }
        FUN_020bf0b4(self);
        FUN_020bf060(self);
    }
}
