// flags: -O4,s
#pragma thumb off
extern void *FUN_020014d4(void *, const void *, unsigned int);
#pragma thumb on
void FUN_overlay_12__0212c24c(char *d, const signed char *s) {
    const signed char *orig;
    int i;
    *d = 0;
    if (s != 0) {
        orig = s;
        for (i = 0; i < 256; i++, s++) {
            if (*s == 0) {
                FUN_020014d4(d, orig, i + 1);
                return;
            }
        }
    }
}
