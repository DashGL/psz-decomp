// flags: -O4,s
enum { E0 = 0, E1 = 1 };
#pragma thumb off
extern unsigned int FUN_02056298(void);
#pragma thumb on
int FUN_020c4f34(unsigned char *self) {
    if (((unsigned char)FUN_02056298() == 1 ? E1 : E0) != 1 && ((unsigned char)FUN_02056298() == 2 ? E1 : E0) != 1) {
        *(unsigned int *)(self + 0x24) = 104;
        return 0;
    }
    return 1;
}
