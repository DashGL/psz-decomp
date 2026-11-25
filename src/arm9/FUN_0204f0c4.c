// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short arr[5];
    unsigned short pad;
    int f10;
    int f14;
    int f18;
    unsigned int flags;
    Vec pos;
    Vec scale;
    unsigned short s0, s1, s2, s3;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Effect;

#pragma thumb off
extern void FUN_0205b16c(void *);
extern void FUN_0205aa80(void *);
#pragma thumb reset

extern int FUN_02085880(int);
extern int FUN_0204dbc4(void *, int);
extern int FUN_0204c7e4(void *);
extern int FUN_0204260c(void *, int, void *, void *);
extern char *FUN_0208555c(int);
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);
extern void FUN_020461f8(void *, unsigned int);
extern void FUN_0204a8fc(void *, void *, void *, void *);

void FUN_0204f0c4(int slot, unsigned char *key, int mode) {
    Effect a, b, c;
    Vec p, q;
    int wide[12], rotation[9], root[12], basis[9];
    Vec offset, position, scale0, scale2;
    char *owner;
    if (!FUN_02085880(slot)) return;
    owner = FUN_0208555c(slot);
    if (!owner) return;
    if (mode == 0) {
        FUN_0203666c(&a);
        a.f54 = 1;
        a.f44 = 1;
        a.f48 = 0x13;
        a.f4c = -1;
        a.f58 = slot;
        a.f40 = 8;
        scale0.x = 0x800;
        scale0.y = 0x800;
        scale0.z = 0x800;
        a.scale = scale0;
        a.flags |= 0x08000000;
        FUN_02046d94(&a, 0, 0);
        if (FUN_0204dbc4(key, 3) || FUN_0204dbc4(key, 11)) {
            a.f40 = 5; a.f44 = 0; a.f48 = -1; a.f4c = -1;
            FUN_02046d94(&a, 0, 0);
        }
    } else if (mode == 1) {
        FUN_0203666c(&b);
        b.f54 = 1;
        b.f58 = slot;
        p = *(Vec *)(owner + 0x9c);
        q.x = p.x;
        q.y = 0x1000;
        q.z = p.z;
        b.pos = q;
        b.f48 = 0x13;
        b.f4c = -1;
        b.flags |= 0x08000000;
        b.f44 = 1;
        FUN_02046d94(&b, 0, 0);
    } else if (mode == 2) {
        char *model = *(char **)(owner + 0x8c);
        if (model) {
            FUN_0205b16c(wide);
            FUN_0205aa80(rotation);
            FUN_0204260c(model, FUN_0204c7e4(key), wide, basis);
            FUN_0204260c(model, 0, root, rotation);
            FUN_020461f8(&offset, key[3]);
            FUN_0204a8fc(&position, wide, rotation, &offset);
            FUN_0203666c(&c);
            c.f54 = 1; c.f58 = slot; c.pos = position; c.f44 = 1; c.f48 = 0x13; c.f4c = -1; scale2.x = 0x999; scale2.y = 0x999; scale2.z = 0x999; c.scale = scale2; c.flags |= 0x08000000;
            FUN_02046d94(&c, 0, 0);
        }
    }
}
