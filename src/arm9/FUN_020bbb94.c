// flags: -O4,p
extern unsigned char DAT_0211b2c0[];
extern volatile int DAT_020fc950;
extern void FUN_020bb690(void *);
extern int FUN_020540c0(void (*)(void *), void *);

int FUN_020bbb94(void) {
    *(int *)(DAT_0211b2c0 + 0x5c) = 0;
    DAT_020fc950 = -1;
    if (FUN_020540c0(FUN_020bb690, *(void *volatile *)(DAT_0211b2c0 + 0x20)) == 2) {
        return 1;
    }
    return 0;
}
