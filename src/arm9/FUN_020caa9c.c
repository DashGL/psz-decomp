// flags: -O4,s
typedef struct {
    int pad[4];
    int f10;
} In;
extern const char DAT_020fd240[];
extern int FUN_020ce250(void *, const char **);
extern int FUN_020ca9a8(void *, int, int, const char *, int, int);
#pragma thumb off
extern int FUN_02003e24(const char *, const char *);
#pragma thumb reset
extern void FUN_020c7bec(const char *);
int FUN_020caa9c(void *a, In *b) {
    const char *s;
    const char *tmp;
    int err = FUN_020ce250(a, &s);
    if (err != 0) {
        return err;
    }
    if (s == 0) {
        s = DAT_020fd240;
    }
    err = FUN_020ca9a8(a, b->f10, 0x69, s, 0xb00, 0);
    if (err != 0) {
        return err;
    }
    tmp = s;
    if (FUN_02003e24(tmp, DAT_020fd240) != 0) {
        FUN_020c7bec(tmp);
        s = 0;
    }
    return 0;
}
