// flags: -O4,p
typedef struct {
    char pad[0x40];
    int f40;
} Obj;

extern const unsigned char DAT_020feab4[];
extern int FUN_020d4f50(Obj *, int, int, unsigned char *, int);

int FUN_020d4ac0(Obj *a, int b, int c) {
    unsigned short tmp;
    unsigned char buf[6];
    int n = 0;

    if (a->f40 == 2) {
        tmp = 3;
        __memcpy(buf, &tmp, 2);
        n += 2;
    }
    __memcpy(buf + n, DAT_020feab4, 2);
    buf[n + 2] = 0x68;
    if (FUN_020d4f50(a, b, c, buf, n + 3) == 0) {
        return 0;
    }
    return 1;
}
