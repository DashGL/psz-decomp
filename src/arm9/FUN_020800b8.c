// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int a[9]; } Block;
extern char *FUN_0208555c(int);

void FUN_020800b8(char *s) {
    char *p = FUN_0208555c(*(int *)(s + 232));
    if (p && (p = *(char **)(p + 432)) && (p = *(char **)(p + 20)) && (p = *(char **)(p + 48))) {
        unsigned int flag;
        Vec3 *src = (Vec3 *)(p + 108);
        Vec3 *dst = (Vec3 *)(s + 92);
        dst->x = src->x;
        dst->y = src->y;
        dst->z = src->z;
        flag = (*(unsigned char *)(s + 253) & 8) != 0;
        if (flag) {
            *(Block *)(s + 112) = *(Block *)(p + 144);
        }
    }
}
