#pragma thumb off
extern void FUN_0206accc(void);
extern void FUN_0206b280(unsigned int);
extern int FUN_0206b298(unsigned int);
#pragma thumb on
void FUN_020bc120(void) {
    FUN_0206accc();
    FUN_0206b280(4);
    while (FUN_0206b298(4)) {
        FUN_0206accc();
        FUN_0206b280(4);
    }
}
