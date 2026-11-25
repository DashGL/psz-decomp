// flags: -O4,s
extern void FUN_overlay_22__021a07c0(void *, void *, void *);
extern void FUN_overlay_22__021a0890(void *, void *, void *);
void FUN_overlay_22__021a0764(unsigned char *s) {
    unsigned char *a = *(unsigned char **)(s + 4);
    unsigned char *b = *(unsigned char **)(s + 8);
    if (a && b) {
        switch (**(signed char **)(*(void **)(a + 0x14))) {
        case 63: FUN_overlay_22__021a07c0(s, a, b); break;
        case 65: FUN_overlay_22__021a0890(s, a, b); break;
        }
    }
}
