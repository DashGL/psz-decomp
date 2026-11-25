// flags: -O4,s
extern void FUN_overlay_22__0219ab34(void *, int, int, int);
void FUN_overlay_22__0219b428(unsigned int *p) {
    int enabled = 1;
    if (p[17] == 2) {
        enabled = 0;
    }
    FUN_overlay_22__0219ab34(p, enabled, enabled, 0);
}
