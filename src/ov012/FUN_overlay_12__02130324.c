// flags: -O4,s
extern int FUN_overlay_12__02130314(void *);
extern void FUN_overlay_12__02131fd0(void *, int);
int FUN_overlay_12__02130324(int *p) {
    if (p[16] != 1) return 0;
    if (p[17] == 1) {
        FUN_overlay_12__02131fd0(p, FUN_overlay_12__02130314(p));
        return 1;
    } else {
        p[16] = 4;
        FUN_overlay_12__02131fd0(p, 1);
        return 1;
    }
}
