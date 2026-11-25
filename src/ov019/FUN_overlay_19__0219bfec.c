// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int FUN_02041474(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);
extern int FUN_overlay_19__02198360(void *);
extern int FUN_overlay_19__0219833c(void *);
extern int FUN_overlay_19__02198384(void *);
extern int FUN_overlay_19__021988f8(void *);
extern void FUN_overlay_19__0219c158(void *);
extern void FUN_overlay_19__0219c094(void *);
extern void FUN_overlay_19__0219c1cc(void *);
extern int FUN_02037254(void *, int, int, void *, int);

void FUN_overlay_19__0219bfec(unsigned *self) {
    unsigned *owner = (unsigned *)self[1];
    if (FUN_02041474(owner, 0)) {
        self[3]++;
        switch (self[3]) {
        case 5:
            FUN_02040c0c((void *)self[1], 0, 18, 4096, 0);
            break;
        case 7:
            FUN_02037924((void *)self[2]);
            break;
        }
    }
    if (self[3] > 7) FUN_02037924((void *)self[2]);
    if (FUN_overlay_19__02198360(owner) == 1) FUN_overlay_19__0219c158(self);
    if (FUN_overlay_19__0219833c(owner) == 1) FUN_overlay_19__0219c094(self);
    if (FUN_overlay_19__02198384(owner) == 1) FUN_overlay_19__0219c1cc(self);
    if (FUN_overlay_19__021988f8(owner) == 1) {
        Vec position = *(Vec *)(owner + 14);
        FUN_02037254(owner, 29, 5, &position, 1);
    }
}
