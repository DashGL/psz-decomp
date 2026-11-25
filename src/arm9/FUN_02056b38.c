// flags: -O4,p -noThumb
struct S {
    char pad[0x40];
    void (*f40)(struct S *);
    char pad2[0x114 - 0x44];
    int f114;
};
extern struct S DAT_021116a0;
extern int FUN_020683d4(void);
extern void FUN_020669dc(int);
extern void FUN_020683e8(int);

void FUN_02056b38(void) {
    int zero = 0;
    struct S *p = &DAT_021116a0;
    for (;;) {
        int s = FUN_020683d4();
        while ((p->f114 & 8) == 0) {
            FUN_020669dc(zero);
        }
        FUN_020683e8(s);
        p->f40(p);
    }
}
