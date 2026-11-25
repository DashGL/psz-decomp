// flags: -O4,s
extern void *const DAT_overlay_18__02123910[];
extern int FUN_overlay_18__0211f824(int, int, void *, void *, void *, int);
extern char *FUN_overlay_18__0211f920(int);
extern void FUN_overlay_18__0211f9dc(void *, int);
extern void FUN_overlay_18__0211fa28(void *, int, int);

void FUN_overlay_18__021225dc(int *s) {
    char *p;
    if (s[3] == -1) {
        s[3] = FUN_overlay_18__0211f824(0, 0, DAT_overlay_18__02123910[15], DAT_overlay_18__02123910[16], DAT_overlay_18__02123910[17], 0);
        p = FUN_overlay_18__0211f920(s[3]);
        if (p != 0) {
            FUN_overlay_18__0211f9dc(p, 0);
            FUN_overlay_18__0211fa28(p, 0, 1);
            *(int *)(p + 0x2ba8) = 100;
        }
    }
}
