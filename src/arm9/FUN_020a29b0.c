// flags: -O4,s
typedef struct { int x, y, z; } V328;
typedef struct { V328 v; unsigned short a; int b, c, d, e, f, g, h; unsigned short i; } P328;
enum { E0 = 0, E1 = 1 };

extern int DAT_020fbe6c[];
extern int DAT_020fbe9c[];
extern V328 DAT_020fc958;
extern int DAT_020fbe58[];
extern signed char DAT_0211a3c4[];
extern char *DAT_02108c64;

extern void FUN_0203020c(void *, void *, int);
extern void FUN_0209a3d4(void *, int);
extern void FUN_020306e4(void *, void *, int, int);
extern void FUN_02099ec8(void *, void *, unsigned);
extern void FUN_020926d0(void *, void *, unsigned, int, int, int);
extern void FUN_02092700(void *, P328);
extern void FUN_0209a478(void *, int);
extern void FUN_02044c08(void *, void *, int);
extern void FUN_0209a33c(void *, int);
extern void FUN_02030da8(void *, void *);
extern void FUN_020a2978(void *, void *, int, int);
extern void FUN_020bce3c(void *);
extern int FUN_0203068c(void *);
extern int FUN_02085750(void *);
extern int FUN_0208546c(void);
extern int FUN_020857fc(void *, int);
extern void *FUN_02030dd0(void *);

void *FUN_020a29b0(char *s, void *arg) {
    P328 param;
    unsigned char packet[12];
    V328 v, w;
    unsigned char code[4];
    char *group, *record;
    int i, value, n;
    unsigned short ang;

    FUN_0203020c(s, arg, 33);
    FUN_0209a3d4(s + 48, FUN_0203068c(s));
    *(void **)s = DAT_020fbe6c;
    *(void **)(s + 48) = DAT_020fbe9c;
    *(void **)(s + 72) = **(void ***)(s + 4);
    *(void **)(s + 76) = FUN_02030dd0(s);
    FUN_020306e4(s + 80, *(void **)(s + 72), 1, 1);
    FUN_020306e4(s + 88, *(char **)(s + 72) + 8, 1, 0);
    ang = *(unsigned short *)(s + 44);
    v = *(V328 *)(s + 28);
    FUN_02099ec8(s + 96, &v, ang);
    *(int *)(s + 312) = 0;
    *(int *)(s + 332) = 0;
    s[384] = 1;
    s[385] = 0;
    *(int *)(s + 388) = 0;
    for (i = 0; i < 4; i++) {
        *(V328 *)(s + 336 + 12 * i) = DAT_020fc958;
        *(int *)(s + 316 + 4 * i) = 0;
    }
    *(int *)(s + 52) |= 128;
    *(short *)(s + 60) = 0;
    *(short *)(s + 62) = 18;
    ang = *(unsigned short *)(s + 44);
    w = *(V328 *)(s + 28);
    FUN_020926d0(&param, &w, ang, FUN_0203068c(s), 20, 2);
    FUN_02092700(s + 96, param);
    FUN_0209a478(s + 48, ((signed char *)*(void **)(s + 72))[16]);
    record = *(char **)(s + 72);
    value = -1;
    if ((signed char)record[17] == 0) value = 4;
    else if ((signed char)record[17] == 1) value = 0;
    else if ((signed char)record[17] == 2) value = 3;
    else if ((signed char)record[17] == 3) value = 1;
    else if ((signed char)record[17] == 4) value = 5;
    *(int *)(s + 68) = value;
    FUN_02044c08(s + 96, DAT_020fbe58, 0);
    FUN_0209a33c(s + 96, FUN_0203068c(s));
    s[384] = ((signed char *)*(void **)(s + 72))[18];
    value = DAT_0211a3c4[13];
    if (value == 1) *(int *)(s + 388) = 15;
    else if (value == 2) *(int *)(s + 388) = 10;
    else *(int *)(s + 388) = 25;
    value = **(unsigned char **)(s + 76);
    if (!((value & 8) ? E1 : E0) && !((value & 4) ? E1 : E0) && ((value & 1) ? E1 : E0)) {
        group = DAT_02108c64 + 20;
        n = FUN_02085750(group);
        if (FUN_020857fc(group, FUN_0208546c())) --n;
        if (n == 0 && !(*(int *)(s + 312) & 2)) {
            FUN_02030da8(code, s);
            FUN_020a2978(packet, code, (signed char)FUN_0203068c(s), 2);
            FUN_020bce3c(packet);
            *(int *)(s + 312) |= 2;
        }
    }
    return s;
}
