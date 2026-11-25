// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int words[12]; } Params;
extern Vec DAT_020fc958, DAT_020faf54;
extern char DAT_020faf68[], DAT_020faf98[];
extern void FUN_0203020c(void *, void *, int), FUN_0209a3d4(void *, int), FUN_02099ec8(void *, void *, int), FUN_020926d0(void *, void *, int, int, int, int), FUN_02092700(void *, Params), FUN_0209a478(void *, int), FUN_02044c08(void *, void *, int), FUN_0209a33c(void *, int);
extern int FUN_0203068c(void *);
char *FUN_02092744(char *s, void *input) {
    Params params;
    Vec initial, position;
    int angle;
    FUN_0203020c(s, input, 16);
    FUN_0209a3d4(s + 48, FUN_0203068c(s));
    *(void **)s = DAT_020faf68;
    *(void **)(s + 48) = DAT_020faf98;
    angle = *(unsigned short *)(s + 44);
    initial = *(Vec *)(s + 28);
    FUN_02099ec8(s + 72, &initial, angle);
    *(void **)(s + 288) = **(void ***)(s + 4);
    *(Vec *)(s + 292) = DAT_020fc958;
    *(int *)(s + 304) = 0;
    *(int *)(s + 308) = 0;
    *(Vec *)(s + 312) = DAT_020fc958;
    *(Vec *)(s + 312) = *(Vec *)(s + 28);
    angle = *(unsigned short *)(s + 44);
    position = *(Vec *)(s + 28);
    FUN_020926d0(&params, &position, angle, FUN_0203068c(s), 9, 4);
    params.words[6] = 10;
    FUN_02092700(s + 72, params);
    FUN_0209a478(s + 48, **(signed char **)(s + 288));
    FUN_02044c08(s + 72, &DAT_020faf54, 0);
    FUN_0209a33c(s + 72, FUN_0203068c(s));
    *(int *)(s + 212) = 60;
    return s;
}
