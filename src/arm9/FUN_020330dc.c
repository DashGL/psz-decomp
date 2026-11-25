//cpp
// flags: -O4,s
extern "C" {
void *FUN_02031a74(void);
char *FUN_02031c88(void *);
extern struct {
    int f0, f4, f8;
    signed char fc;
} DAT_0211a3c4;
}
extern "C" int FUN_020330dc(void) {
    int active = (DAT_0211a3c4.f8 >= 0) ? 1 : 0;
    if (active && DAT_0211a3c4.fc == 1) {
        char *p = FUN_02031c88(FUN_02031a74());
        if (p && *(int *)(p + 0xc) == 7) return 1;
    }
    return 0;
}
