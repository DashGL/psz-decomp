// flags: -O4,s
#pragma thumb off
extern void FUN_0205cf10(volatile unsigned short *, int);
#pragma thumb reset
int FUN_020c3018(int screen, int amount) {
    if (amount >= -16 && amount <= 16) {
        switch (screen) {
        case 1: FUN_0205cf10((volatile unsigned short *)0x0400006c, amount); break;
        case 2: FUN_0205cf10((volatile unsigned short *)0x0400106c, amount); break;
        case 0:
            FUN_0205cf10((volatile unsigned short *)0x0400106c, amount);
            FUN_0205cf10((volatile unsigned short *)0x0400006c, amount);
            break;
        }
        return 1;
    }
    return 0;
}
