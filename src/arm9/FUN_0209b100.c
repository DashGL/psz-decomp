// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern char DAT_020fb458[], DAT_020fb48c[];
extern Vec DAT_020fc958;
extern void *FUN_0203020c(void *, void *, int);
extern void *FUN_0209a3d4(void *, unsigned int);
extern void *FUN_02099ec8(void *, void *, unsigned short);
extern void *FUN_020306e4(void *, void *, int, unsigned int);
extern void FUN_0209b934(void *);
extern void FUN_0209baac(void *);
extern void FUN_0209b8c4(void *);
extern unsigned int FUN_0203068c(void *);
extern void *FUN_02030dd0(void *);

#define W(n) (*(int *)(s + (n)))

void *FUN_0209b100(char *s, void *input) {
    Vec a, b;
    unsigned short rot;
    FUN_0203020c(s, input, 17);
    FUN_0209a3d4(s + 48, FUN_0203068c(s));
    *(void **)s = DAT_020fb458;
    *(void **)(s + 48) = DAT_020fb48c;
    *(void **)(s + 72) = **(void ***)(s + 4);
    *(void **)(s + 76) = FUN_02030dd0(s);
    rot = *(unsigned short *)(s + 44);
    a = *(Vec *)(s + 28);
    FUN_02099ec8(s + 80, &a, rot);
    FUN_020306e4(s + 296, *(char **)(s + 72) + 8, 1, 1);
    FUN_020306e4(s + 304, *(char **)(s + 72) + 16, 1, 0);
    FUN_020306e4(s + 312, *(void **)(s + 72), 1, 1);
    W(320) = 0;
    W(324) = 1;
    W(328) = 0;
    *(Vec *)(s + 332) = DAT_020fc958;
    W(344) = 0;
    b = *(Vec *)(s + 28);
    W(348) = b.y;
    W(352) = 0;
    W(52) |= 256;
    FUN_0209b934(s);
    FUN_0209baac(s);
    FUN_0209b8c4(s);
    if (*(signed char *)(*(char **)(s + 72) + 24) == 1) {
        **(unsigned char **)(s + 76) = 0;
    }
    if ((**(unsigned char **)(s + 76) & 2) ? E1 : E0) {
        W(320) |= 8;
    }
    return s;
}
