// flags: -O4,p -noThumb
typedef int fx32;
typedef long long fx64;
typedef unsigned long long u64;
typedef unsigned short u16;
typedef struct { fx32 x, y, z; } VecFx32;

void FUN_0205c8cc(const VecFx32 *pSrc, VecFx32 *pDst) {
    fx64 t;
    fx32 sqrt;
    t = (fx64)pSrc->x * pSrc->x;
    t += (fx64)pSrc->y * pSrc->y;
    t += (fx64)pSrc->z * pSrc->z;
    *(volatile u16 *)0x04000280 = 2;
    *(volatile u64 *)0x04000290 = (1ULL << 56);
    *(volatile fx64 *)0x04000298 = t;
    *(volatile u16 *)0x040002b0 = 1;
    *(u64 *)0x040002b8 = (u64)t << 2;
    while (*(volatile u16 *)0x040002b0 & 0x8000) {}
    sqrt = *(volatile fx32 *)0x040002b4;
    while (*(volatile u16 *)0x04000280 & 0x8000) {}
    t = *(volatile fx64 *)0x040002a0 * sqrt;
    pDst->x = (fx32)((t * pSrc->x + (1LL << 44)) >> 45);
    pDst->y = (fx32)((t * pSrc->y + (1LL << 44)) >> 45);
    pDst->z = (fx32)((t * pSrc->z + (1LL << 44)) >> 45);
}
