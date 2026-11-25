// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

extern void *FUN_02036c88(void *, int);
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_0200c938(void *, unsigned);
extern void FUN_0205b960(void *, void *, void *);
extern void FUN_020345f0(void *, void *);
extern int FUN_overlay_19__02198418(void *);
extern void FUN_020bbfbc(void *, int);
extern void *FUN_020ba894(unsigned);
extern void FUN_0203647c(void *, void *, void *);
extern void *FUN_overlay_19__02198ce4(void *, void *, unsigned, int);
extern int FUN_overlay_19__02198438(void *, void *);

void FUN_overlay_19__0219c094(int *self)
{
    Vec position;
    int matrix43[12];
    int matrix33[9];
    Vec zero, rotated, copy, base, sum;
    int *owner = (int *)self[1];
    void *child;

    position.x = 0;
    position.y = 0;
    position.z = 0;
    child = FUN_02036c88(owner, 0);
    if (child && FUN_0204260c(child, 14, matrix43, matrix33)) {
        unsigned short angle;
        int i;

        FUN_0200c938(&zero, 12);
        FUN_0205b960(&zero, matrix43, &zero);
        FUN_020345f0(&copy, &zero);
        position = copy;
        angle = *(unsigned short *)(owner + 17);
        for (i = 0; i < 12; i++) {
            if (FUN_overlay_19__02198418(owner) == 1) {
                void *p;
                unsigned short a;

                base.x = 0;
                base.y = 0;
                base.z = 2048;
                rotated = base;
                a = (unsigned short)(angle + (i << 16) / 12);
                FUN_020bbfbc(&rotated, a);
                p = FUN_020ba894(76);
                if (p) {
                    FUN_0203647c(&sum, &position, &rotated);
                    p = FUN_overlay_19__02198ce4(p, &sum, a, i);
                }
                FUN_overlay_19__02198438(owner, p);
            }
        }
    }
}
