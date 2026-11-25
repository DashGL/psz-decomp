// flags: -O4,p
extern int DAT_020fad88[];
extern void *DAT_020fad68[];
extern char DAT_020faee4[], DAT_020faf00[];
extern void FUN_020c1a08(void *, int), FUN_02070c08(void *, void *), FUN_02070dd0(void *, int, int), FUN_020c1908(int, int, int), FUN_020c1aac(int, int), FUN_020c18d8(int, int);
extern void *FUN_02070bfc(void);
void FUN_020910bc(char *s, int a, int b) {
    int index = 0, category = 0;
    switch (*(int *)(s + 8)) {
    case 0: index = 0; break; case 1: index = 1; break; case 2: index = 2; break; case 3: index = 28; break;
    case 4: index = 3; break; case 5: index = 4; break; case 6: index = 5; break; case 7: index = 6; break;
    case 8: index = 7; break; case 9: index = 8; break; case 10: index = 9; break; case 11: index = 10; break;
    case 12: index = 11; break; case 13: index = 12; break; case 14: index = 13; break; case 15: index = 14; break;
    case 16: index = 29; break; case 17: index = 21; break; case 18: index = 22; break; case 19: index = 23; break;
    case 20: index = 24; break;
    case 21: category = 2; index = 0; break; case 22: category = 2; index = 1; break; case 23: category = 2; index = 2; break;
    case 24: category = 2; index = 3; break; case 25: category = 2; index = 4; break; case 26: category = 2; index = 5; break;
    case 27: category = 2; index = 6; break; case 28: category = 2; index = 7; break;
    case 29: index = 27; break; case 30: index = 15; break; case 31: index = 16; break; case 32: index = 17; break;
    case 33: index = 18; break; case 34: index = 19; break; case 35: index = 20; break;
    case 36: category = 1; index = 1; break; case 37: category = 1; index = 0; break;
    }
    if (category == 2) {
        FUN_020c1a08((void *)DAT_020fad88[index], 5);
        FUN_02070c08(FUN_02070bfc(), DAT_020fad68[index]);
        FUN_02070dd0(FUN_02070bfc(), a, b);
    } else if (category == 1) {
        FUN_020c1a08(DAT_020faee4, 5);
        FUN_020c1908(index, 0, 5);
    } else {
        FUN_020c1a08(DAT_020faf00, 5);
        FUN_020c1aac(index, 5);
        FUN_020c18d8(index, 5);
    }
}
