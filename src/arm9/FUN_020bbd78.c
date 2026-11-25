// flags: -O4,s
extern char DAT_0211b2c0[];
extern void FUN_020bbd10(int);
extern void FUN_020bbd50(void *);
#pragma thumb off
extern int FUN_02053d84(void (*)(void *));
#pragma thumb on
void FUN_020bbd78(void) {
    switch (*(int *)(DAT_0211b2c0 + 0x50)) {
    case 0:
    case 1:
        FUN_020bbd10(1);
        return;
    }
    if (FUN_02053d84(FUN_020bbd50) != 2) {
        *(int *)(DAT_0211b2c0 + 0x50) = 1;
        FUN_020bbd10(0);
    }
}