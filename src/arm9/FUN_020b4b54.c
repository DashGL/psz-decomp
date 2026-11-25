// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned int f00[4];
    int f10;
    int f14;
    int f18;
    unsigned int f1c;
    Vec3 pos;
    unsigned int f2c[5];
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Desc;

extern void FUN_0203666c(void *);
extern void FUN_02046020(int, Vec3 *, Key *, int);
extern int FUN_0203a1a8(Key *, int);
extern int FUN_02046828(int);
extern int FUN_0204630c(int, Key *);
extern int FUN_02084684(int, Key *, unsigned char *);
extern char *FUN_02046d94(void *, int, int);

void FUN_020b4b54(void *unused, int owner, Key *key, unsigned int mode, int scale, int count, int *indices, int *values, int first, int second) {
    Desc desc;
    Vec3 pos;
    Vec3 alt;
    unsigned char converted[24];
    Key k1;
    Key k2;
    Key k3;
    Key k4;
    int i;
    int t = key->b[1];
    int ok = (t >= 8 && t <= 13);
    if (ok == 0) return;

    FUN_0203666c(&desc);
    desc.f58 = owner;
    FUN_02046020(owner, &pos, key, 0);
    desc.pos = pos;
    desc.f40 = 8;

    if (mode == 4) return;

    switch (mode) {
    default:
    case 0: desc.f60 = 1; break;
    case 1: desc.f60 = 2; break;
    case 2: desc.f60 = 3; break;
    case 5: desc.f60 = 4; break;
    case 6: desc.f60 = 5; break;
    case 7: desc.f60 = 6; break;
    case 3: desc.f60 = 16; break;
    case 8: desc.f60 = 17; break;
    }

    k1 = *key;
    if (FUN_0203a1a8(&k1, 12)) {
        desc.f54 = 51;
    } else {
        k2 = *key;
        if (FUN_0203a1a8(&k2, 13)) {
            desc.f54 = 145;
        } else {
            desc.f54 = 49;
        }
    }

    { int a = FUN_02046828(owner); desc.f44 = first; desc.f48 = second; desc.f4c = a; desc.f1c |= (2u << 26); }

    for (i = 0; i < count; i++) {
        k3 = *key;
        if (FUN_0203a1a8(&k3, 11)) {
            if (i == 0) {
                desc.f40 = 8;
            } else {
                desc.f40 = 5;
                FUN_02046020(owner, &alt, key, 1);
                desc.pos = alt;
            }
        }
        if (indices[i] >= 0) {
            int param = FUN_0204630c(owner, key);
            char *object;
            int idx = indices[i];
            int val = values[i];
            if (val != 0) val = values[i];
            desc.f14 = val;
            desc.f10 = idx;
            desc.f18 = scale;
            object = FUN_02046d94(&desc, key->b[1], param);
            if (object) {
                int valid = 0;
                if (object) {
                    k4 = *key;
                    if (FUN_02084684(owner, &k4, converted)) {
                        valid = 1;
                    }
                }
                if (valid) {
                    int a = converted[8] << 9;
                    int b = converted[9];
                    *(int *)(object + 0x130) = b;
                    *(int *)(object + 0x134) = a;
                }
            }
        }
    }
}
