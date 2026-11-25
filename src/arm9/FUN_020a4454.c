// flags: -O4,s
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb reset
void *FUN_020a4454(unsigned short *self) {
    FUN_0200c938(self, 12);
    FUN_0206557c(0, self, 12);
    self[0] = 0xff2c;
    self[1] = 0xff36;
    return self;
}
