// flags: -O4,s
extern void *DAT_0213e1e4[];
extern void *DAT_0213f2cc;
extern void FUN_020b9e9c(void *);
extern char *FUN_020a0ce8(void);
extern void FUN_02079144(void);
extern void FUN_overlay_12__02131b98(void);
extern void FUN_overlay_12__0212c84c(void);
extern void FUN_overlay_12__0212c700(void);
extern void FUN_overlay_12__0212d7b0(void);
extern void *FUN_0209e1f8(void *);
extern void *FUN_020b9e28(void *);
void *FUN_overlay_12__0212cb1c(char *s) {
    char *p;
    *(void **)s = DAT_0213e1e4;
    FUN_020b9e9c(s);
    p = FUN_020a0ce8() + 0x25c;
    *(int *)(p + 0x2d0) = 0;
    FUN_02079144();
    FUN_overlay_12__02131b98();
    FUN_overlay_12__0212c84c();
    FUN_overlay_12__0212c700();
    FUN_overlay_12__0212d7b0();
    if (DAT_0213f2cc == s) DAT_0213f2cc = 0;
    FUN_0209e1f8(s + 0xec);
    FUN_020b9e28(s);
    return s;
}
