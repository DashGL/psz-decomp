//cpp
// flags: -O4,s
extern "C" {
void FUN_0203260c(void *);
void FUN_02032660(void *);
void FUN_020332d0(void *, void *);
extern void *DAT_02108c68;
}
extern "C" void FUN_020325cc(char *s) {
    int active = (*(signed char *)(s + 0x14) == 1) ? 1 : 0;
    if (active) {
        int set = (*(unsigned short *)(s + 4) & 1) ? 1 : 0;
        if (set) {
            FUN_0203260c(s);
            FUN_02032660(s);
        }
    }
    FUN_020332d0(DAT_02108c68, s);
}
