// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int w[6]; } Setup;
typedef struct {
    Vec pos;
    unsigned short angle;
    int id, first, second, zero, mode, zero2, flags;
    unsigned short end;
} Params;

extern char UNK_020fb438[], UNK_020fb42c[];
extern int FUN_0203068c(void *);
extern void FUN_0209a478(void *, int), FUN_02044c08(void *, void *, int), FUN_0209a33c(void *, int);

void FUN_0209b934(char *s) {
    Setup setup;
    Params initial, copy;
    int variant = 0, flags = 4, kind, id;
    setup = **(Setup **)(s + 4);
    kind = ((signed char *)&setup)[18];
    if (kind == 0) {
        if (*(signed char *)(*(char **)(s + 72) + 24) == 1) variant = 2; else variant = 1;
        FUN_0209a478(s + 48, 50);
        flags |= 8;
    } else if (kind == 1) {
        if (*(signed char *)(*(char **)(s + 72) + 24) == 1) variant = 4; else variant = 3;
        *(int *)(s + 68) = 0;
    } else if (kind == 2) {
        if (*(signed char *)(*(char **)(s + 72) + 24) == 1) variant = 6; else variant = 5;
        *(int *)(s + 68) = 3;
    } else if (kind == 3) {
        if (*(signed char *)(*(char **)(s + 72) + 24) == 1) variant = 8; else variant = 7;
        *(int *)(s + 68) = 1;
    }
    id = FUN_0203068c(s);
    initial.pos = *(Vec *)(s + 28);
    initial.angle = *(unsigned short *)(s + 44);
    initial.id = id;
    initial.first = variant;
    initial.second = variant;
    initial.zero = 0;
    initial.mode = 3;
    initial.zero2 = 0;
    initial.flags = flags;
    initial.end = 0;
    initial.mode = (*(signed char *)(*(char **)(s + 72) + 24) == 1) ? ((kind == 0) ? 1 : 2) : 3;
    copy = initial;
    *(Vec *)(s + 112) = copy.pos;
    *(unsigned short *)(s + 124) = copy.angle;
    *(int *)(s + 128) = copy.id;
    *(int *)(s + 132) = copy.first;
    *(int *)(s + 136) = copy.second;
    *(int *)(s + 140) = copy.zero;
    *(int *)(s + 144) = copy.mode;
    *(int *)(s + 148) = copy.zero2;
    *(int *)(s + 152) = copy.flags;
    *(unsigned short *)(s + 156) = copy.end;
    if (kind == 0) FUN_02044c08(s + 80, UNK_020fb438, 0);
    else FUN_02044c08(s + 80, UNK_020fb42c, 0);
    FUN_0209a33c(s + 80, FUN_0203068c(s));
}
