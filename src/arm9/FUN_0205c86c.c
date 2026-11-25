// flags: -O4,p -noThumb
typedef struct { int x, y, z; } Vec;
int FUN_0205c86c(const Vec *v) {
    long long tmp = (long long)v->x * v->x;
    tmp += (long long)v->y * v->y;
    tmp += (long long)v->z * v->z;
    *(volatile unsigned short *)0x040002b0 = 1;
    *(volatile long long *)0x040002b8 = tmp << 2;
    while (*(volatile unsigned short *)0x040002b0 & 0x8000) {}
    return (int)(*(volatile unsigned int *)0x040002b4 + 1) >> 1;
}
