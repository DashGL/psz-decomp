// flags: -O2,s
extern void FUN_020c183c(int);
extern void *FUN_02090c20(void);
extern unsigned int FUN_overlay_11__02123008(void *, int);
extern void FUN_02091028(void *, unsigned int);
void FUN_overlay_11__02123058(int *p) {
    unsigned int i;
    FUN_020c183c(p[12]);
    for (i = 0; i < 8; i++) {
        void *mgr = FUN_02090c20();
        FUN_02091028(mgr, FUN_overlay_11__02123008(p, i));
    }
}
