// flags: -O4,s
extern void *FUN_020c2b50(void *);
extern void FUN_020c2b68(void *);
extern void *FUN_overlay_0__0211efc0(void *);
extern void FUN_overlay_0__0211e6c0(void *);
#pragma thumb off
extern void *FUN_0200c938(void *, int);
extern void FUN_0200c394(void *, unsigned int, unsigned int, void *(*)(void *), void (*)(void *));
extern unsigned FUN_02009c84(int);
extern unsigned FUN_0200923c(unsigned, unsigned);
extern int FUN_02009c50(unsigned);
#pragma thumb on

void *FUN_overlay_0__0211e6c4(char *self) {
    *(int *)self = 0;
    FUN_0200c394(self + 4, 2, 4, FUN_020c2b50, FUN_020c2b68);
    FUN_0200c938(self + 12, 32);
    *(int *)(self + 44) = 0;
    *(int *)(self + 48) = 0;
    *(int *)(self + 52) = 0;
    *(int *)(self + 56) = 0;
    *(int *)(self + 60) = 0;
    *(int *)(self + 64) = 0;
    *(int *)(self + 68) = -1;
    *(int *)(self + 72) = 0;
    *(int *)(self + 76) = FUN_02009c50(FUN_0200923c(0x3f000000, FUN_02009c84(393216)));
    *(int *)(self + 80) = 0;
    *(int *)(self + 84) = 0;
    *(int *)(self + 88) = 0;
    *(int *)(self + 92) = 0;
    *(unsigned short *)(self + 96) = 65535;
    *(unsigned short *)(self + 98) = 65535;
    *(unsigned short *)(self + 100) = 65535;
    *(unsigned short *)(self + 102) = 65535;
    *(int *)(self + 104) = 0;
    FUN_0200c394(self + 108, 31, 32, FUN_overlay_0__0211efc0, FUN_overlay_0__0211e6c0);
    FUN_0200c394(self + 1100, 22, 32, FUN_overlay_0__0211efc0, FUN_overlay_0__0211e6c0);
    return self;
}
