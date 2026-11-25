// flags: -O4,s
extern const char DAT_0211fea0[];
extern unsigned int DAT_0211fe20[];
extern unsigned int DAT_0211fe1c;
extern void FUN_020a45a4(unsigned int);
extern void FUN_overlay_7__0211fb58(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
#pragma thumb off
extern void *FUN_0205e090(void);
extern void *FUN_0205e328(void);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb on
extern void FUN_020c2b84(void *, const void *, unsigned int, unsigned int, unsigned int);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *, unsigned int, unsigned int, unsigned int);

#pragma opt_propagation off
void FUN_overlay_7__0211fabc(char *self) {
    int a, b, i;
    FUN_020a45a4(2);
    FUN_overlay_7__0211fb58(0, 0, 4, 4, 0);
    FUN_0206557c(0, FUN_0205e090(), 0x800);
    b = 1; a = 0;
    FUN_020a45a4(8);
    *(volatile unsigned short *)0x0400000e = (unsigned short)((b << 2) | ((a << 8) | (0x80 | (*(volatile unsigned short *)0x0400000e & 0x43))));
    FUN_020c2b84(self + 0x10, DAT_0211fea0, 3, 0, 1);
    i = 0; do { int off = i << 2; *(int *)(self + off + 0x8c) = FUN_020c2438(FUN_020c1fc8(), *(unsigned int *)((char *)DAT_0211fe20 + off), DAT_0211fe1c, 1); i++; } while (i < 2);
    FUN_0206557c(0, FUN_0205e328(), 32);
}
