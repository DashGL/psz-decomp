// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int a, b, c; } Defs;
extern void FUN_020c0488(void *), FUN_020c0484(void *, int), FUN_020be4f8(void *, unsigned int, int);
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb on
extern int FUN_02044c84(void *, void *, void *, unsigned int), FUN_02044bd4(void *, void *, void *, void *);
extern void *FUN_020be450(void);
extern const Defs DAT_020ed578;

void FUN_020449cc(char *s, unsigned int arg, signed char *key) {
    unsigned int shape[13];
    Defs defaults;
    unsigned int config[2];
    int flags, mode;
    FUN_020c0488(shape);
    if (!FUN_02044c84(shape + 3, s + 4, s + 16, *(unsigned short *)(s + 28))) return;
    FUN_020c0484(shape, 32);
    flags = 0;
    if (((unsigned char)key[1] & 3) ? E1 : E0) flags |= 1;
    if (((unsigned char)key[1] & 4) ? E1 : E0) flags |= 2;
    defaults = DAT_020ed578;
    defaults.b = flags;
    FUN_0200c938(config, 8);
    config[1] = arg;
    if (FUN_02044bd4(s, shape, &defaults, config)) {
        mode = -1;
        if ((key[0] == 0) ? E1 : E0) mode = 0;
        else if ((key[0] == 1) ? E1 : E0) mode = 1;
        else if ((key[0] == 2) ? E1 : E0) mode = 2;
        FUN_020be4f8(FUN_020be450(), *(unsigned int *)s, mode);
    }
}
