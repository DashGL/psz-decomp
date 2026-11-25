// flags: -O4,s
typedef struct { unsigned char bytes[4]; } Key;
extern void *FUN_02086e3c(void);
extern signed char *FUN_020870c4(void *);
extern int FUN_02087138(void *), FUN_0204db98(void *, int), FUN_0203a1a8(void *, int), FUN_0208b8a0(void *, int), FUN_020b707c(void *, void *);

int FUN_0208b7d0(char *s, void *item) {
    signed char *settings;
    Key c, b, a;
    if (FUN_02087138(FUN_02086e3c()) == 1) {
        settings = FUN_020870c4(FUN_02086e3c());
        if (FUN_0204db98(item, 3)) {
            if (settings[32] != 2) {
                c = *(Key *)item;
                if (FUN_0203a1a8(&c, 2)) return 0;
            }
            if (settings[32] == 2) {
                b = *(Key *)item;
                if (FUN_0203a1a8(&b, 0) && FUN_0208b8a0(item, 9)) return 0;
            }
            a = *(Key *)item;
            if (FUN_0203a1a8(&a, 1)) {
                if (settings[32] == 2) return 0;
                if (*(void **)(s + 92) && !FUN_020b707c(*(void **)(s + 92), item)) return 0;
            }
        }
    }
    return 1;
}
