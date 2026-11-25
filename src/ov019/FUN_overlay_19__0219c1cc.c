// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_0219d448;
extern void FUN_overlay_19__02198a80(void *, int);
extern void FUN_020bbfbc(void *, int);
extern int FUN_overlay_19__02198418(void *);
extern void *FUN_020ba894(unsigned);
extern void FUN_0203647c(void *, void *, void *);
extern void *FUN_overlay_19__021999c4(void *, void *, unsigned short, int);
extern int FUN_overlay_19__02198438(void *, void *);
extern void *FUN_overlay_19__02198a50(void *);

void FUN_overlay_19__0219c1cc(int *self) {
    int *owner = (int *)self[1];
    Vec position;
    unsigned short angle;
    int i;
    FUN_overlay_19__02198a80(owner, 1);
    position = *(Vec *)(owner + 14);
    angle = *(unsigned short *)(owner + 17);
    for (i = 0; i < 4; i++) {
        Vec rotated, base;
        unsigned short heading;
        base.x = 0;
        base.y = 0;
        base.z = DAT_0219d448;
        rotated = base;
        heading = (unsigned short)(angle + (i << 16) / 4);
        FUN_020bbfbc(&rotated, heading);
        if (FUN_overlay_19__02198418(owner) == 1) {
            void *alloc = FUN_020ba894(116);
            if (alloc) {
                Vec sum;
                FUN_0203647c(&sum, &position, &rotated);
                alloc = FUN_overlay_19__021999c4(alloc, &sum, heading, i);
            }
            FUN_overlay_19__02198438(owner, alloc);
        }
    }
    FUN_overlay_19__02198a50(owner);
}
