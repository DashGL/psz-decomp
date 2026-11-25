// flags: -O4,p
extern int DAT_0211b404;
extern int FUN_020dd6e8(void *);
extern int FUN_020bceac(void);
extern void FUN_020dd6e0(void *, int);
extern void FUN_020dd7e4(void *);
void FUN_020c0be4(void) {
    if (FUN_020dd6e8(&DAT_0211b404) == 0) {
        void *p = &DAT_0211b404;
        int v = FUN_020bceac();
        FUN_020dd6e0(p, v);
        FUN_020dd7e4(p);
    }
}
