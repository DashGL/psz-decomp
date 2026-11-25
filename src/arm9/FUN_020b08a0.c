//cpp
// flags: -O4,s
struct Entry16 { int a[4]; };
extern "C" {
extern Entry16 DAT_0211aa44;
extern void FUN_0203955c(Entry16 *);
Entry16 *FUN_020b08a0(unsigned char *s) {
    int i = 0;
    for (; i < *(short *)(s + 0xc); i++) {
        int ok = (((*(unsigned int **)(s + 8))[i] & 0x4) != 0) ? 1 : 0;
        if (ok) return &(*(Entry16 **)(s + 4))[i];
    }
    FUN_0203955c(&DAT_0211aa44);
    return &DAT_0211aa44;
}
}
