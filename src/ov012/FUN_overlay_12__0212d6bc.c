// flags: -O4,s
extern void FUN_overlay_12__0212d700(int);
extern int FUN_02084bf8(void *);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *, const void *, const void *, int);
extern int DAT_0211a51c;
extern int DAT_0213e220;
extern int DAT_0213e20c[];
void FUN_overlay_12__0212d6bc(int flag) {
    FUN_overlay_12__0212d700(0);
    if (FUN_02084bf8(&DAT_0211a51c)) {
        void *p = &DAT_0213e220;
        int mode = flag ? 1 : 2;
        DAT_0213e20c[3] = FUN_020c2438(FUN_020c1fc8(), p, p, mode);
        DAT_0213e20c[4] = flag;
    }
}
