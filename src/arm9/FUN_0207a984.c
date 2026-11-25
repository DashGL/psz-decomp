// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern char DAT_020fa3e0[];
extern void FUN_0207a44c(void *);
void *FUN_0207a984(char *s) {
    Vec zero;
    FUN_0207a44c(s);
    *(void **)s = DAT_020fa3e0;
    *(unsigned short *)(s + 380) = 0;
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    *(Vec *)(s + 384) = zero;
    *(int *)(s + 396) = 0;
    *(int *)(s + 400) = 0;
    *(int *)(s + 404) = 0;
    *(int *)(s + 408) = 0;
    *(int *)(s + 412) = 0;
    *(int *)(s + 416) = 0;
    return s;
}
