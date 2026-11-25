// flags: -O4,s
extern void *FUN_overlay_12__021363a4(void *);
void *FUN_overlay_12__021363c4(unsigned int *p) {
    char *it, *end; p[0] = 0; it = (char *)p + 4; end = (char *)p + 84; do { FUN_overlay_12__021363a4(it); it += 20; } while (it < end); p[21] = 0; p[22] = 0; return p;
}
