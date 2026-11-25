//cpp
// flags: -O4,s
extern "C" int FUN_020a5f7c(char *self) {
    int a = (*(unsigned short *)(self + 98) & 4) ? 1 : 0;
    if (a) return 1;
    int b = (*(unsigned short *)(self + 100) & 4) ? 1 : 0;
    if (b) return 2;
    return 0;
}
