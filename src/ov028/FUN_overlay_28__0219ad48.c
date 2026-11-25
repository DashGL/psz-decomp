// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
typedef struct Descriptor {
    unsigned short ids[7];
    int a16, a20, rate;
    unsigned flags;
    Vec position, scale;
    short rotation[4];
    int v64, v68, v72, v76, v80, kind, owner, v92, v96;
} Descriptor;
extern void *FUN_02036c88(void *, int);
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_0200c938(void *, unsigned);
extern void FUN_0205b960(void *, void *, void *);
extern void FUN_020345f0(void *, void *);
extern void *FUN_02035408(void *, int, int, int);
extern void *FUN_02046d94(void *, int, int);

void FUN_overlay_28__0219ad48(int *self) {
    Descriptor d;
    int matrix43[12];
    int matrix33[9];
    Vec position;
    Vec copy;
    void *child = FUN_02036c88(self, 0);
    if (child && FUN_0204260c(child, 0, matrix43, matrix33)) {
        int i;
        FUN_0200c938(&position, 12);
        FUN_0205b960(&position, matrix43, &position);
        FUN_020345f0(&copy, &position);
        d.ids[0] = 65535;
        d.ids[1] = 65535;
        for (i = 0; i < 5; i++) d.ids[i + 2] = 65535;
        d.a16 = -1;
        d.a20 = -1;
        d.rate = 4096;
        d.flags = 0;
        FUN_02035408(&d.position, 0, 0, 0);
        FUN_02035408(&d.scale, 4096, 4096, 4096);
        d.rotation[0] = 0;
        d.rotation[1] = 0;
        d.rotation[2] = 0;
        d.rotation[3] = 0;
        d.v64 = -1;
        d.v68 = -1;
        d.v72 = -1;
        d.v76 = -1;
        d.v80 = 0;
        d.flags |= 2;
        d.kind = 149;
        d.owner = -1;
        d.v92 = 0;
        d.v96 = 0;
        d.kind = 38;
        d.owner = self[3];
        d.position = copy;
        FUN_02046d94(&d, 0, 0);
    }
}
