// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int scalar; Vec first, second, scaled, direction; } Frame;
enum { E0 = 0, E1 = 1 };
extern const int DAT_0219bdc0;
extern const int DAT_0219bdd4;
extern const int DAT_0219bdd0;
extern const int lbl_0219bdc0;
extern int FUN_overlay_29__02199b94(void *);
extern int FUN_020370b8(void *, int, void *);
extern void FUN_02037924(void *);
extern void FUN_02036368(void *);
extern void FUN_020bbfbc(void *, int);
extern void FUN_overlay_29__02199598(void *, void *, void *, const void *);
extern void FUN_02091cc0(void *, void *, const void *);
extern void FUN_overlay_29__021993f8(void *, void *);
extern void FUN_overlay_29__02199438(void *, void *);

void FUN_overlay_29__02199db0(int *self) {
    Frame f;
    int *state = (int *)self[2];
    void *owner = (void *)self[1];
    if (!FUN_020370b8(owner, FUN_overlay_29__02199b94(state), &f.direction)) {
        FUN_02037924(state);
        return;
    }
    FUN_02036368(&f.direction);
    FUN_020bbfbc(&f.direction, *(unsigned short *)(self + 4));
    FUN_overlay_29__02199598(&f.scalar, owner, self + 3, &DAT_0219bdc0);
    FUN_02091cc0(&f.first, &f.direction, &DAT_0219bdd4);
    FUN_02091cc0(&f.scaled, &f.first, &f.scalar);
    FUN_02091cc0(&f.second, &f.direction, &DAT_0219bdd0);
    FUN_overlay_29__021993f8(owner, &f.scaled);
    FUN_overlay_29__02199438(owner, &f.second);
    if ((self[3] > lbl_0219bdc0) ? E1 : E0) {
        FUN_02037924(state);
    }
}
