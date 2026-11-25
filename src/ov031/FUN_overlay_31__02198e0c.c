// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
extern int DAT_0219cc54;
extern int FUN_02040d2c(void *, int);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_02036f08(void *, int);
extern int FUN_02075090(void *);

void FUN_overlay_31__02198e0c(int *p) {
    int *c = (int *)p[1];
    Vec v = *(Vec *)(c + 14);
    int y = v.y;
    int index;
    if ((y > 0) ? E1 : E0) {
        y -= DAT_0219cc54;
        if ((y < 0) ? E1 : E0) y = 0;
        v.y = y;
        *(Vec *)(c + 14) = v;
    }
    index = c[56];
    switch (p[3]) {
    case 0:
        if (FUN_02040d2c(c, index)) {
            FUN_02043ea4(c, index, 0);
            FUN_02036f08(c, 1);
            p[3] = 1;
        }
        break;
    case 1:
        if (FUN_02075090(c)) {
            c[37] |= 65536;
        }
        break;
    }
}
