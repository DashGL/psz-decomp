// flags: -O4,p
extern int *DAT_02197f40;
extern void FUN_020ba8ac(void *);
void FUN_overlay_4__0212b934(void) {
    int *p = DAT_02197f40;
    if (p) {
        if (p) {
            *p = -1;
            FUN_020ba8ac(p);
        }
        DAT_02197f40 = 0;
    }
}
