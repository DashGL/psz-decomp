// flags: -O4,s
enum { E0 = 0, E1 = 1 };
#pragma thumb off
extern void FUN_02055c40(unsigned int);
extern void FUN_02055c50(unsigned int);
extern unsigned int FUN_02056298(void);
extern int FUN_020561b0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_02055bb8(void);
#pragma thumb on

int FUN_020c4ca4(unsigned int *self, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
    int result = 0;
    self[9] = 0;
    FUN_02055c40((unsigned short)self[4]);
    if ((((unsigned char)FUN_02056298() == 2) ? E1 : E0) != 0) {
        result = FUN_020561b0(arg2, arg1, arg3, 0, 0, 0, 7, 10, 2);
        if (!result) self[9] = FUN_02055bb8();
    } else if ((((unsigned char)FUN_02056298() == 1) ? E1 : E0) != 0) {
        result = FUN_020561b0(arg2, arg1, arg3, 0, 0, 0, 8, 10, 2);
        if (!result) self[9] = FUN_02055bb8();
    }
    FUN_02055c50((unsigned short)self[4]);
    return result;
}
