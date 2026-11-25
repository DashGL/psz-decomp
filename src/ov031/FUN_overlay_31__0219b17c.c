// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern Vec DAT_0219cf40, DAT_0219cf28, DAT_0219cf4c;
extern int DAT_0219cf1c, DAT_0219cf14;
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern int FUN_02036c34(void *);
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02092654(Vec *, const int *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_overlay_31__0219b78c(void *, const Vec *, const int *);
extern unsigned short FUN_overlay_31__0219b80c(void *, unsigned short, unsigned);
extern void FUN_020c1d7c(int, int, int, unsigned, int);
void FUN_overlay_31__0219b17c(char *self, int event) {
    switch (event) {
    case 1: {
        Vec position = *(Vec *)(self + 0x38), difference, result;
        int scale, one, quotient, delta;
        FUN_02036348(&difference, &DAT_0219cf40, &DAT_0219cf28);
        delta = FUN_02036c34(self);
        one = 4096;
        FUN_020bc610(&quotient, &delta, &DAT_0219cf1c);
        FUN_020bc5cc(&scale, &one, &quotient);
        FUN_02092654(&difference, &scale);
        FUN_0203647c(&result, &position, &difference);
        *(Vec *)(self + 0x38) = result;
        break;
    }
    case 12: {
        char *owner = *(char **)(self + 16);
        FUN_overlay_31__0219b78c(self, &DAT_0219cf4c, &DAT_0219cf14);
        FUN_overlay_31__0219b80c(self, *(unsigned short *)(owner + 0x66), 1280);
        break;
    }
    case 11:
        FUN_overlay_31__0219b78c(self, &DAT_0219cf40, &DAT_0219cf14);
        FUN_overlay_31__0219b80c(self, 0, 1280);
        break;
    case 3:
        FUN_020c1d7c(28, 21, 0, 0, 4);
        break;
    }
}
