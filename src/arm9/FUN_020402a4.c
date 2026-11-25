// flags: -O4,s
extern void *DAT_02108c64;
extern const char DAT_020f8bb0[], DAT_020f8bc0[], DAT_020f8bc8[], DAT_020f8bd0[];
extern void FUN_02032dfc(void *, void *), FUN_02041a50(void *);
extern int FUN_0206d2e4(const int *, void *), FUN_020038ec(void *, unsigned int, const char *, ...);
extern void *FUN_020ba374(const char *, int *, int), *FUN_020ba440(void *);
void FUN_020402a4(char *self) {
    int record[5]; char key[12]; char path[64]; char locale[4]; int size;
    void *handle;
    FUN_02032dfc(record, DAT_02108c64);
    FUN_0206d2e4(record, key);
    FUN_02041a50(locale);
    FUN_020038ec(path, 64, DAT_020f8bb0, DAT_020f8bc0, DAT_020f8bc8, locale, key, DAT_020f8bd0);
    handle = FUN_020ba374(path, &size, 16);
    *(void **)(self + 24) = handle;
    if (handle) *(void **)(self + 28) = FUN_020ba440(handle);
}
