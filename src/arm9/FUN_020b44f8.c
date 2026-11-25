// flags: -O4,s
typedef struct { int x, y, z; } V;
extern char *UNK_02108d04;
extern void *FUN_020b3d04(void);
extern void FUN_020b430c(void *, unsigned char, unsigned int);
void FUN_020b44f8(char *s) {
    V b, a;
    char *actor = UNK_02108d04, *target;
    int x, z;
    unsigned int distance;
    if (!*(int *)(s + 28)) {
        target = *(char **)(s + 20);
        if (target && actor) {
            b = *(V *)(target + 92);
            a = *(V *)(actor + 156);
            x = b.x - a.x;
            z = b.z - a.z;
            if (x < 0) x *= -1;
            if (z < 0) z *= -1;
            distance = (x >> 8) * (x >> 8) + (z >> 8) * (z >> 8);
            if (x < 6144 && z < 6144 && distance < 576) FUN_020b430c(FUN_020b3d04(), (unsigned char)s[24], distance);
        }
    }
}
