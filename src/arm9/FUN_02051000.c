//cpp
// flags: -O4,s
extern "C" {
void FUN_020512a8(void *);
void FUN_02051050(void *);
extern signed char *DAT_02108c64;
}
extern "C" void FUN_02051000(char *s) {
    int active;
    *(int *)(s + 0x4c) = DAT_02108c64[0x16];
    active = (DAT_02108c64[0x14] == 1) ? 1 : 0;
    if (active) FUN_020512a8(s);
    *(unsigned int *)(s + 0x58) = 1;
    FUN_02051050(s);
}
