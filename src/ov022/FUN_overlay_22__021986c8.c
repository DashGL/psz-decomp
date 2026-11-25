// flags: -O4,p
extern void FUN_overlay_22__0219aea0(void *, int *);
extern void FUN_overlay_22__02197fd0(void *);
int FUN_overlay_22__021986c8(unsigned char *p, int index) {
    if (index >= 0 && index < 9) {
        unsigned char *slot = p + 92 + 24 * index;
        if (*(int *)slot) {
            FUN_overlay_22__0219aea0(p, (int *)(slot + 12));
            FUN_overlay_22__02197fd0(slot);
        }
        return 1;
    }
    return 0;
}
