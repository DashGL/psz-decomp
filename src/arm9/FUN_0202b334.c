// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int f0, f4;
    unsigned char f8;
    char pad[3];
    char *fc;
} Obj;
extern int FUN_020240b0(Obj *);
extern void FUN_0202c694(char *);
extern void FUN_0202bdd4(char *);
extern int FUN_0202b268(Obj *);
int FUN_0202b334(Obj *a) {
    char *r4 = a->fc;
    if (a->f8 != 4) {
        if (FUN_020240b0(a) != 0) {
            return 1;
        }
    }
    r4[0x455] = 0;
    *(int *)(r4 + 0x1d4) = 0;
    r4[0x454] = 0;
    FUN_0202c694(r4 + 0x2ec);
    FUN_0202bdd4(r4 + 0x3a4);
    return FUN_0202b268(a);
}
