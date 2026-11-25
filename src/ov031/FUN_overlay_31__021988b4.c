// flags: -O4,s
typedef struct Vec {
    int x, y, z;
} Vec;

typedef struct Descriptor {
    unsigned short ids[7];
    int a16, a20, rate;
    unsigned flags;
    Vec position, scale;
    short rotation[4];
    int v64, v68, v72, v76, v80, kind, owner, v92, v96;
} Descriptor;

extern void FUN_02035408(Vec *, int, int, int);
extern void *FUN_02046d94(Descriptor *, int, int);
extern void FUN_02043ea4(void *, int, int);

void FUN_overlay_31__021988b4(int *self)
{
    if (self[0] != 5) {
        self[0] = 5;
        if (self[1]) {
            Descriptor d;
            int i;

            d.ids[0] = 65535;
            d.ids[1] = 65535;
            for (i = 0; i < 5; i++) {
                d.ids[i + 2] = 65535;
            }
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
            d.kind = 40;
            d.owner = ((int *)self[1])[3];
            d.position = *(Vec *)(self + 5);
            FUN_02046d94(&d, 0, 0);
            FUN_02043ea4((void *)self[1], self[2], 0);
        }
    }
}
