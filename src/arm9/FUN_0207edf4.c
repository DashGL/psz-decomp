// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned char pad0[0x50];
    Vec vec;
    unsigned char pad1[0x104 - 0x5c];
    int scalar;
} Obj;

void FUN_0207edf4(Obj *self, int num, int den) {
    Vec tmp;
    int v = (num * self->vec.x) / den;
    tmp.x = v;
    tmp.y = v;
    tmp.z = v;
    self->vec = tmp;
    self->scalar = (self->scalar * num) / den;
}
