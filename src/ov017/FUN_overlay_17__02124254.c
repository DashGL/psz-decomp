// flags: -O4,s
#pragma thumb off
extern unsigned int FUN_02003c70(const char *);
#pragma thumb on
int FUN_overlay_17__02124254(void *unused, const signed char *s) {
    int h = 0;
    int i = (int)FUN_02003c70((const char *)s) - 1;
    for (; i >= 0; i--) {
        h = h * 137 + s[i];
    }
    if (h <= 0) h = -h;
    return h % 1000;
}
