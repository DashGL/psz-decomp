// flags: -O4,s
extern int DAT_0219c230;
extern int FUN_02036f7c(void *, void *);
#pragma thumb off
extern int FUN_0205c7ac(void *, void *);
#pragma thumb on

int FUN_overlay_28__0219a5c4(int *p, int *v)
{
    int old = p[19], forward[3], sum, flag;
    long long y, x, z;

    p[19] = 0;
    if (old == 1) {
        return 0;
    }
    FUN_02036f7c((void *)p[1], forward);
    if (FUN_0205c7ac(forward, v) < 0) {
        return 0;
    }
    y = v[1];
    x = v[0];
    z = v[2];
    sum = (int)((z * z + 2048) >> 12) + ((int)((x * x + 2048) >> 12) + (int)((y * y + 2048) >> 12));
    flag = !(sum <= DAT_0219c230);
    if (flag != 0) {
        return 0;
    }
    p[19] = 1;
    return 1;
}
