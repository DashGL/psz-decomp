// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern unsigned int UNK_0211a604[];
extern int UNK_020fb1d4[];
extern int DAT_020fb1d4[];
extern int UNK_020fb1d8[];
extern char *UNK_02108c84;

extern int FUN_02098dcc(int, int);
extern int FUN_0208546c(void);
extern void FUN_020866b4(int, Vec3 *);
extern void FUN_02036348(Vec3 *, Vec3 *, Vec3 *);
extern void FUN_020345f0(Vec3 *, Vec3 *);
extern void FUN_020bc5cc(int *, int *, int *);
#pragma thumb off
extern int FUN_0205c7ac(Vec3 *, Vec3 *);
extern int FUN_0205c86c(Vec3 *);
#pragma thumb reset

int FUN_02097650(char *s) {
    Vec3 point, player, eye, delta, direction, diff, src, target, copy;
    int lenA, lenB, thresh1, thresh2, first, p10, p04, second, tmp;
    int squared, thresh;
    Vec3 *dp;

    if (!(UNK_0211a604[1] & 1)) {
        UNK_020fb1d4[1] = 0xc000;
        UNK_0211a604[1] |= 1;
    }
    if (FUN_02098dcc(*(int *)(s + 8), 1)) {
        point = *(Vec3 *)(s + 0x40);
        FUN_020866b4(FUN_0208546c(), &player);
        FUN_02036348(&diff, &point, &player);
        dp = (Vec3 *)((unsigned long long)(unsigned int)&diff & 0xFFFFFFFFFFFFFFFFULL);
        squared = (int)(((long long)dp->z * dp->z + 0x800) >> 12) +
                  ((int)(((long long)dp->x * dp->x + 0x800) >> 12) +
                   (int)(((long long)dp->y * dp->y + 0x800) >> 12));
        if (*(short *)(s + 0x10) != 4) {
            FUN_020bc5cc(&thresh1, UNK_020fb1d8, UNK_020fb1d8);
            thresh = thresh1;
        } else {
            FUN_020bc5cc(&thresh2, DAT_020fb1d4, DAT_020fb1d4);
            thresh = thresh2;
        }
        { int ok = !(squared <= thresh); if (ok != 0) {
            if (UNK_02108c84) {
                char *camera = *(char **)(UNK_02108c84 + 0x40 + 4 * *(int *)(UNK_02108c84 + 0x64));
                if (camera) {
                    char *params = camera + 4;
                    src = *(Vec3 *)(camera + 0x18);
                    FUN_020345f0(&eye, &src);
                    FUN_02036348(&delta, &point, &eye);
                    copy = *(Vec3 *)(camera + 0x24);
                    FUN_020345f0(&target, &copy);
                    FUN_02036348(&direction, &target, &eye);
                    if (params) {
                        int dot = FUN_0205c7ac(&delta, &direction);
                        int culled;
                        lenA = FUN_0205c86c(&delta);
                        lenB = FUN_0205c86c(&direction);
                        p10 = *(int *)(params + 0x10);
                        culled = 0;
                        FUN_020bc5cc(&first, &p10, &lenB);
                        { int ok2 = !(dot > first); if (ok2 != 0) {
                            p04 = *(int *)(params + 4);
                            FUN_020bc5cc(&second, &p04, &lenB);
                            FUN_020bc5cc(&tmp, &second, &lenA);
                            { int ok3 = !(dot < tmp); if (ok3 != 0) {
                                culled = 1;
                            }
                        }
                        } } if (culled) {
                            return 0;
                        }
                    }
                }
            }
            return 1;
        } }
    }
    return 0;
}
