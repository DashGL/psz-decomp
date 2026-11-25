//cpp
// flags: -O4,s
extern "C" {
extern int DAT_0213e20c;
extern void FUN_overlay_12__02131c58(void);
extern void FUN_overlay_12__02130ab8(void *);
extern void FUN_overlay_12__02130bbc(void *);
void FUN_overlay_12__02130a4c(int *s) {
    if ((DAT_0213e20c == s[2] ? 1 : 0) != 0) {
        FUN_overlay_12__02131c58();
        switch (s[17]) {
        case 0: FUN_overlay_12__02130ab8(s); break;
        case 1: FUN_overlay_12__02130bbc(s); break;
        }
    }
}
}
