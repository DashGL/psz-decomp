// flags: -O4,s
extern int FUN_020c2d1c(void *);
#pragma thumb off
extern void *FUN_0205e260(void);
extern void *FUN_0205e464(void);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb on
void FUN_020c2c4c(volatile unsigned int **self) {
    if (FUN_020c2d1c((void *)*self)) {
        unsigned int count = (*self)[20];
        FUN_0206557c(0, FUN_0205e260(), count);
        FUN_0206557c(0, FUN_0205e464(), 0x10400);
    }
}
