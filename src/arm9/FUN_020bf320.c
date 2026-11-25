// flags: -O4,s
extern char DAT_020f5c04[];
extern void FUN_020525a8(void *, void *);
extern void FUN_020bf73c(void *, void *);
extern void FUN_020bf470(void *, void *, void *);
int FUN_020bf320(char *s) {
    char *rec; int count, i, any = 0, temp[3];
    FUN_020525a8(s + 0x20, DAT_020f5c04);
    rec = *(char **)(s + 4);
    count = *(int *)(s + 8);
    for (i = 0; i < count; i++, rec += 0x34) {
        int flag = !!(*(int *)(rec + 0x30) & 1);
        if (flag == 0) {
            if (any) { FUN_020bf73c(rec + 0xc, temp); FUN_020bf470(s + 0x20, s + 0x20, temp); }
            else { FUN_020bf73c(rec + 0xc, temp); FUN_020525a8(s + 0x20, temp); any = 1; }
        }
    }
    return any;
}