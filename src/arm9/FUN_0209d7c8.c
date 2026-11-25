// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int words[11]; unsigned short angle; unsigned short pad; } Params;
extern char DAT_020fb564[];
extern char DAT_020fb594[];
extern void FUN_0203020c(void *, void *, int);
extern void FUN_0209a3d4(void *, int);
extern void FUN_02099ec8(void *, Vec *, unsigned short);
extern void FUN_020306e4(void *, void *, int, int);
extern void FUN_020926d0(Params *, Vec *, int, int, int, int);
extern void FUN_02092700(void *, Params);
extern void FUN_0209a478(void *, int);
extern void FUN_02044c08(void *, Vec *, int);
extern void FUN_0209a33c(void *, int);
extern int FUN_0203068c(void *);
extern void *FUN_02030dd0(void *);



void *FUN_0209d7c8(char *s, void *input) {
    Params params;
    Vec zero;
    Vec a;
    Vec b;
    int angle;
    int id;

    FUN_0203020c(s, input, 19);
    FUN_0209a3d4(s + 48, FUN_0203068c(s));
    *(void **)s = DAT_020fb564;
    *(void **)(s + 48) = DAT_020fb594;
    *(void **)(s + 72) = **(void ***)(s + 4);
    *(void **)(s + 76) = FUN_02030dd0(s);
    angle = *(unsigned short *)(s + 44);
    a = *(Vec *)(s + 28);
    FUN_02099ec8(s + 80, &a, (unsigned short)angle);
    *(int *)(s + 296) = 0;
    FUN_020306e4(s + 300, *(void **)(s + 72), 1, 1);
    FUN_020306e4(s + 308, *(char **)(s + 72) + 8, 1, 0);
    *(int *)(s + 316) = 0;
    *(int *)(s + 320) = 0;
    angle = *(unsigned short *)(s + 44);
    b = *(Vec *)(s + 28);
    id = FUN_0203068c(s);
    FUN_020926d0(&params, &b, angle, id, 21, 4);
    params.words[6] = 22;
    params.angle = 0x5555;
    FUN_02092700(s + 80, params);
    FUN_0209a478(s + 48, *(signed char *)(*(char **)(s + 72) + 16));
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    FUN_02044c08(s + 80, &zero, 0);
    FUN_0209a33c(s + 80, FUN_0203068c(s));
    *(unsigned short *)(s + 60) = 0;
    *(unsigned short *)(s + 62) = 22;
    if (!!(**(unsigned char **)(s + 76) & 1) != 0) { *(int *)(s + 316) |= 1; }
    return s;
}
