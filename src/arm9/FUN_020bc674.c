// flags: -O4,s
int FUN_020bc674(int *a) {
    long long sum = (long long)a[0] * (long long)a[0];
    sum += (long long)a[1] * (long long)a[1];
    *(volatile unsigned short *)0x040002b0 = 1;
    *(volatile long long *)0x040002b8 = sum << 2;
    while (*(volatile unsigned short *)0x040002b0 & 0x8000) {
    }
    return (*(volatile int *)0x040002b4 + 1) >> 1;
}
