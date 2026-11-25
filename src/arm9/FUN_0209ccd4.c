// flags: -O4,s
extern char UNK_0211a51c[];
extern void *UNK_02108c68;
extern void *FUN_020780f4(void);
extern void *FUN_02031a74(void);
extern int FUN_0207836c(void *);
extern int FUN_02084be8(void *);
extern void FUN_0209ce8c(void *, void *, int);
extern void FUN_02078148(void *, unsigned short, int);
extern void FUN_02031e60(void *, int, int, int, int);
extern void FUN_0207f40c(void *, int, int, int);
extern void FUN_02031f10(void *, void *);
extern void FUN_0204f3a4(void);
extern void FUN_02033400(void *, int);
extern void FUN_020852fc(void);
void FUN_0209ccd4(char *s) {
    int d[4], key, enabled;
    FUN_0209ce8c(d, s + 4, ((signed char *)s)[21]);
    if (FUN_0207836c(d)) {
        FUN_02078148(FUN_020780f4(), *(unsigned short *)d, 1);
        enabled = 1;
        if ((unsigned char)s[20] & 2)
            enabled = 0;
        FUN_02031e60(FUN_02031a74(), d[2], 1, enabled, 1);
        FUN_0207f40c(&key, 1, 0, 0);
        FUN_02031f10(FUN_02031a74(), &key);
        FUN_0204f3a4();
        if (FUN_02084be8(UNK_0211a51c) && ((unsigned char)s[20] & 1))
            FUN_02033400(UNK_02108c68, 12);
        FUN_020852fc();
    }
}
