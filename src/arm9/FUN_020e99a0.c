// flags: -O4,p
extern char DAT_02101870[];
#pragma thumb off
extern void FUN_02065774(void *, void *, int);
extern int FUN_020015ac(void *, void *, int);
#pragma thumb on
unsigned short FUN_020e99a0(void *a) {
    unsigned short buf[4];
    FUN_02065774(a, buf, 8);
    if (FUN_020015ac(&buf[3], DAT_02101870, 2) == 0) {
        return buf[2];
    }
    return 0;
}
