// flags: -O4,p -noThumb
struct Shared65EC0 {
    unsigned int f0;
    unsigned short f4;
    unsigned short f6;
};

extern void FUN_02065fd8(int, volatile void *, int);
extern void FUN_020004fa(int);
extern void FUN_02065510(int, void *, int);
extern void FUN_0206605c(int, volatile void *, int);

void FUN_02065ec0(void) {
    static int DAT_02118178 = 0;
    volatile struct Shared65EC0 *sh;
    if (DAT_02118178) {
        return;
    }
    DAT_02118178 = 1;
    sh = (volatile struct Shared65EC0 *)0x027ffff0;
    sh->f0 = 0;
    FUN_02065fd8(0x7e, sh, 0);
    while (sh->f6 != 0) {
        FUN_020004fa(0x400);
    }
    *(unsigned int *)0x027fffb0 = ~0u;
    *(unsigned int *)0x027fffb4 = ~0u << 16;
    FUN_02065510(0, (void *)0x027fffc0, 0x28);
    *(volatile unsigned short *)0x04000204 |= 0x800;
    *(volatile unsigned short *)0x04000204 |= 0x80;
    FUN_0206605c(0x7e, sh, 0);
    FUN_02065fd8(0x7f, sh, 0);
}
