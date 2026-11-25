// version: 2.0/sp2
// flags: -O4,p -noThumb
extern void FUN_0205c638(int);
extern void FUN_0205c668(int);
extern long long FUN_0205c5dc(void);
int FUN_0205c574(int x) {
    if (x > 0) {
        long long inv_sqrt;
        FUN_0205c638(x);
        FUN_0205c668(x);
        inv_sqrt = FUN_0205c5dc();
        while (*(volatile unsigned short *)0x040002b0 & 0x8000) {}
        return (int)((inv_sqrt * *(volatile unsigned int *)0x040002b4 + (1LL << 41)) >> 42);
    }
    return 0;
}
