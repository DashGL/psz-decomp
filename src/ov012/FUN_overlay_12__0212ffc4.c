//cpp
// flags: -O4,s
extern "C" {
extern int DAT_0213e20c;
extern void FUN_overlay_12__02131c58(void);
extern void FUN_overlay_12__02130048(void *);
extern void FUN_overlay_12__02130150(void *);
void FUN_overlay_12__0212ffc4(int *s) {
    if ((DAT_0213e20c == s[2] ? 1 : 0) != 0) {
        FUN_overlay_12__02131c58();
        switch (s[17]) {
        case 0: FUN_overlay_12__02130048(s); break;
        case 1: FUN_overlay_12__02130150(s); break;
        }
    }
}
}
