// flags: -O4,s
extern unsigned int FUN_020dd244(unsigned int);
extern unsigned long long FUN_020dd1f8(unsigned int);
extern unsigned int FUN_020dd208(unsigned int);
extern unsigned int FUN_020dd43c(unsigned long long, unsigned int);
unsigned int FUN_020dd83c(unsigned int self, unsigned int record) {
    switch (FUN_020dd244(record)) {
    case 2:
        return FUN_020dd43c(FUN_020dd1f8(record), *(unsigned int *)(self + 36));
    case 3:
        return FUN_020dd208(record);
    case 1:
        return ~0u;
    default:
        return 0;
    }
}
