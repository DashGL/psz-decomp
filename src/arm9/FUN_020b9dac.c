enum { E0 = 0, E1 = 1 };
extern char DAT_020fc88c[];
extern void FUN_020b9e9c(void *);
extern void FUN_020ba940(void *);
void *FUN_020b9dac(char *s) {
    *(void **)s = DAT_020fc88c;
    if (((*(int *)(s + 4) & 0x40) ? E1 : E0) == E0) {
        *(int *)(s + 4) |= 0x40;
        FUN_020b9e9c(s);
        if (*(char **)(s + 0x18)) {
            if (*(char **)(s + 0x10) == s) {
                *(void **)(*(char **)(s + 0x18) + 0x1c) = 0;
            } else if (*(char **)(*(char **)(s + 0x18) + 0x1c) == s) {
                *(void **)(*(char **)(s + 0x18) + 0x1c) = *(void **)(s + 0x14);
                *(void **)(*(char **)(s + 0x10) + 0x14) = 0;
                if (*(char **)(s + 0x14)) {
                    *(void **)(*(char **)(s + 0x14) + 0x10) = *(void **)(s + 0x10);
                }
            } else {
                *(void **)(*(char **)(s + 0x10) + 0x14) = *(void **)(s + 0x14);
                if (*(char **)(s + 0x14)) {
                    *(void **)(*(char **)(s + 0x14) + 0x10) = *(void **)(s + 0x10);
                } else {
                    *(void **)(*(char **)(*(char **)(s + 0x18) + 0x1c) + 0x10) = *(void **)(s + 0x10);
                }
            }
        }
    }
    FUN_020ba940(s);
    return s;
}
