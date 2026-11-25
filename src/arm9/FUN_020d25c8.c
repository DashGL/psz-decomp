// flags: -O4,p
extern int FUN_020c6e0c(int);
extern void FUN_020d20e0(void *, int);
extern void FUN_020d2524(int, int, int, void *, int);
extern void FUN_020c6de0(int);
extern int DAT_0211d094;
struct S16 { char b[16]; };
extern const struct S16 DAT_020f5c9c;
extern char DAT_020fe6e0[];
extern void *DAT_020fe694;
void FUN_020d25c8(void) {
    struct S16 s2;
    struct S16 s;
    if (DAT_0211d094 != 0) {
        int i = FUN_020c6e0c(DAT_0211d094) - 1;
        if (i >= 0) {
            s = DAT_020f5c9c;
            do {
                s2 = s;
                DAT_020fe694 = DAT_020fe6e0;
                FUN_020d20e0(&s2, 15);
                FUN_020d2524(i, 0, 0, &s2, 0);
                i--;
            } while (i >= 0);
        }
        FUN_020c6de0(DAT_0211d094);
        DAT_0211d094 = 0;
    }
}
