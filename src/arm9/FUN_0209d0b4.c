// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
typedef struct { int words[11]; unsigned short angle, pad; } Params;

extern char DAT_020fb4f8[];
extern char DAT_020fb528[];
extern char DAT_020fb4e4[];
extern void FUN_0203020c(void *, void *, int);
extern void FUN_0209a3d4(void *, int);
extern void FUN_02099ec8(void *, void *, unsigned short);
extern void FUN_020306e4(void *, void *, int, int);
extern void FUN_020926d0(void *, void *, int, int, int, int);
extern void FUN_02092700(void *, Params);
extern void FUN_0209a478(void *, int);
extern void FUN_02044c08(void *, void *, int);
extern void FUN_0209a33c(void *, int);
extern int FUN_0203068c(void *);
extern void *FUN_02030dd0(void *);

#define W(n) (*(int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))

void *FUN_0209d0b4(char *s, void *input) {
    Params params;
    Vec a, b;
    int angle, id;

    FUN_0203020c(s, input, 18);
    FUN_0209a3d4(s + 48, FUN_0203068c(s));
    *(void **)s = DAT_020fb4f8;
    *(void **)(s + 48) = DAT_020fb528;
    *(void **)(s + 72) = **(void ***)(s + 4);
    *(void **)(s + 76) = FUN_02030dd0(s);
    angle = H(44);
    a = *(Vec *)(s + 28);
    FUN_02099ec8(s + 80, &a, (unsigned short)angle);
    FUN_020306e4(s + 296, *(char **)(s + 72) + 16, 1, 1);
    FUN_020306e4(s + 304, *(char **)(s + 72) + 24, 1, 0);
    FUN_020306e4(s + 312, *(void **)(s + 72), 1, 1);
    FUN_020306e4(s + 320, *(char **)(s + 72) + 8, 1, 0);
    W(328) = 0;
    H(332) = 0;
    H(334) = 0;
    angle = H(44);
    b = *(Vec *)(s + 28);
    id = FUN_0203068c(s);
    FUN_020926d0(&params, &b, angle, id, 19, 4);
    FUN_02092700(s + 80, params);
    FUN_0209a478(s + 48, *(signed char *)(*(char **)(s + 72) + 32));
    FUN_02044c08(s + 80, DAT_020fb4e4, 0);
    FUN_0209a33c(s + 80, FUN_0203068c(s));
    H(60) = 0;
    H(62) = 20;
    if ((**(unsigned char **)(s + 76) & 1) ? E1 : E0) W(328) |= 2;
    return s;
}
