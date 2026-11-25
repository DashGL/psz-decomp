// flags: -O4,s
typedef struct { int x, y, z; } V;
extern char *DAT_02108c84;
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
extern void FUN_020302e8(void *, void *);

int FUN_020774dc(char *s, int mode) {
    if (mode == 0) {
        if (*(int *)(FUN_020870c4(FUN_02086e3c()) + 0xd38) >= *(short *)(*(char **)(s + 0x44) + 4)) {
            return 1;
        }
        return 0;
    }
    if (mode == 1) {
        char *m = DAT_02108c84;
        if (m) {
            char *p = *(char **)(m + 0x40 + 4 * *(int *)(m + 0x64));
            if (p) {
                V a, b;
                int x, z, d;
                a = *(V *)(p + 0x18);
                x = a.x;
                z = a.z;
                FUN_020302e8(&b, s);
                x -= b.x;
                z -= b.z;
                d = (int)(((long long)z * z + 0x800) >> 12) + (int)(((long long)x * x + 0x800) >> 12);
                if (d > 0x254d33) {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 0;
}
