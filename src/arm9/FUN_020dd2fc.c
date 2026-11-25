// flags: -O4,s
extern unsigned int FUN_020dd244(unsigned int);
extern unsigned int FUN_020dd234(unsigned int);
extern void FUN_020dd2d0(unsigned int, unsigned int);
void FUN_020dd2fc(unsigned int self) {
    if (FUN_020dd244(self) == 3) {
        unsigned int flags = FUN_020dd234(self) | 4;
        FUN_020dd2d0(self, flags);
    }
}
