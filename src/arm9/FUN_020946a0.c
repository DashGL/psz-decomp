// flags: -O4,s
extern char UNK_0211a5c4[];
extern void FUN_0206f090(void *, int), FUN_0208d638(void *, int, void *, int, int);

void FUN_020946a0(char *s) {
    enum { E0 = 0, E1 = 1 };
    if (!s) return;
    if (*(int *)(s + 576) == 7) {
        FUN_0206f090(s, *(unsigned short *)(s + 192));
        FUN_0208d638(UNK_0211a5c4, *(int *)(s + 252), s + 156, *(unsigned short *)(s + 192), 2);
        *(short *)(s + 312) = 0;
        *(int *)(s + 248) &= ~256;
    } else if (*(int *)(s + 576) == 0) {
        if (((*(int *)(s + 248) & 0x10000000) != 0) ? E1 : E0) {
            FUN_0206f090(s, *(unsigned short *)(s + 192));
            FUN_0208d638(UNK_0211a5c4, *(int *)(s + 252), s + 156, *(unsigned short *)(s + 192), 0);
            *(short *)(s + 312) = 0;
            *(int *)(s + 248) &= ~256;
            *(int *)(s + 248) &= ~0x10000000;
        }
    } else {
        FUN_0206f090(s, *(unsigned short *)(s + 192));
        FUN_0208d638(UNK_0211a5c4, *(int *)(s + 252), s + 156, *(unsigned short *)(s + 192), 0);
        *(short *)(s + 312) = 0;
        *(int *)(s + 248) &= ~256;
    }
}
