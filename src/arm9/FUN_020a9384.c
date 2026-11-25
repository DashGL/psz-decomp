// flags: -O4,p
extern char *DAT_02108d04;
int FUN_020a9384(void) {
    int result = 0;
    char *p = DAT_02108d04;
    if (p && *(short *)(p + 340) >= 10000) result = 1;
    return result;
}
