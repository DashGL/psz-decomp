// flags: -O4,p
// near: 17 byte diffs (instruction scheduling between local_10 = *param_2 struct copy and -d1 + FUN_0205c540(diff))
typedef struct { int x, y; } Vec2;
extern void FUN_020bf618(Vec2 *, void *, int *);
extern int FUN_020bf62c(Vec2 *, Vec2 *);
#pragma thumb off
extern int FUN_0205c540(int);
#pragma thumb reset
extern void FUN_02034e98(Vec2 *, int);
extern void FUN_020bf66c(void *, void *, Vec2 *);

void FUN_020bf584(void *param_1, Vec2 *param_2, int *param_3, void *param_4) {
    Vec2 local_8;
    Vec2 local_10;
    int d1, v8, d2, diff;
    FUN_020bf618(&local_8, param_1, param_3);
    d1 = FUN_020bf62c(&local_8, param_2);
    v8 = param_3[2];
    d2 = FUN_020bf62c(&local_8, &local_8) - (int)(((long long)v8 * v8 + 0x800) >> 12);
    diff = (int)(((long long)d1 * d1 + 0x800) >> 12) - d2;
    if (diff >= 0) {
        int t = -d1 + FUN_0205c540(diff);
        local_10 = *param_2;
        FUN_02034e98(&local_10, t);
        FUN_020bf66c(param_4, param_1, &local_10);
    }
}
