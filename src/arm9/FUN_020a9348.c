//cpp
// flags: -O4,s
extern "C" {
void FUN_02032dfc(void *, void *);
int FUN_0206d45c(void *);
extern char *DAT_02108c64;
}
extern "C" int FUN_020a9348(void) {
    unsigned int desc[5];
    int result = 0;
    FUN_02032dfc(desc, DAT_02108c64);
    if (FUN_0206d45c(desc)) {
        int flag = (*(unsigned short *)(DAT_02108c64 + 4) & 32) ? 1 : 0;
        if (!flag) result = 1;
    }
    return result;
}
