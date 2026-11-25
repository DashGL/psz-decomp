// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
extern const char DAT_020faa18[];
extern const char DAT_020faa30[];
extern void FUN_0200c938(void *, int);
extern int FUN_020c1fc8(void);
extern int FUN_020c2438(int, const char *, const char *, int);
extern void FUN_02088e68(void *);
typedef struct {
    char pad[0x20];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c[4];
    int f4c[4];
    int f5c;
} S_88bd0;
S_88bd0 *FUN_02088bd0(S_88bd0 *a) {
    int i;
    a->f20 = -1;
    a->f24 = 0;
    a->f28 = 0;
    a->f2c = -1;
    a->f30 = 0;
    a->f34 = 0;
    a->f38 = 0;
    FUN_0200c938(a->f3c, 0x10);
    FUN_0200c938(a->f4c, 0x10);
    a->f5c = 0;
    for (i = 0; i < 4; i++) {
        a->f3c[i] = -1;
        a->f4c[i] = -1;
    }
    a->f20 = FUN_020c2438(FUN_020c1fc8(), DAT_020faa18, DAT_020faa30, 2);
    FUN_02088e68(a);
    return a;
}
