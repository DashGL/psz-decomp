// flags: -O4,s
#pragma opt_propagation off
typedef struct { int x, y, z; } Vec3;
typedef struct { int m[9]; } Mtx33;
typedef struct { int m[12]; } Mtx43;
extern const Vec3 DAT_0219a984;
extern const int DAT_0219ae14[];
extern void *FUN_02036c88(void *, int);
extern void FUN_0204260c(void *, int, Mtx43 *, Mtx33 *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_0205b960(const Vec3 *, const Mtx43 *, Vec3 *);
extern void FUN_0205b0f0(const Vec3 *, const Mtx33 *, Vec3 *);
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern void FUN_020345f0(Vec3 *, const Vec3 *);
extern void FUN_02036368(Vec3 *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern int FUN_02072650(void *, int, int, int);
extern void FUN_02072750(void *, int, Vec3 *);
extern int FUN_02074e9c(void *, int, int, int);
extern void *FUN_02075040(void *, int);
extern void FUN_0204bf88(void *);

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_25__0219995c(char *self) {
    Mtx43 mtx43;
    Mtx33 mtx33;
    Vec3 vec_a;
    Vec3 vec_b;
    Vec3 vec_c;
    Vec3 vec_d;
    Vec3 vec_e;
    int scale;
    unsigned short yaw;
    void *effect;

    FUN_0204260c(FUN_02036c88(self, 0), 4, &mtx43, &mtx33);
    FUN_0200c938(&vec_a, 12);
    FUN_0205b960(&vec_a, &mtx43, &vec_a);
    FUN_020345f0(&vec_b, &vec_a);
    vec_c = DAT_0219a984;
    FUN_0205b0f0(&vec_c, &mtx33, &vec_c);
    vec_c.y = 0;
    FUN_020345f0(&vec_d, &vec_c);
    FUN_02036368(&vec_d);
    V(self, 0xec) = vec_b;
    V(self, 0xf8) = V(self, 0xec);
    {
        long long x, y, z;
        scale = DAT_0219ae14[2];
        x = (long long)vec_d.x * scale;
        y = (long long)vec_d.y * scale;
        z = (long long)vec_d.z * scale;
        FUN_02035408(&vec_e, (int)((x + 0x800) >> 12), (int)((y + 0x800) >> 12), (int)((z + 0x800) >> 12));
    }
    V(self, 0x104) = vec_e;
    V(self, 0x110) = V(self, 0x104);
    yaw = FUN_0205cc08(I(self, 0x110));
    I(self, 0x114) = DAT_0219ae14[3];
    I(self, 0xe4) = FUN_02072650(self, 0, 0, 0);
    FUN_02072750(self, I(self, 0xe4), &V(self, 0xec));
    I(self, 0xe8) = FUN_02074e9c(self, 2, 0, 0);
    effect = FUN_02075040(self, I(self, 0xe8));
    if (effect) {
        V(effect, 0x5c) = V(self, 0xf8);
        H(effect, 0x6a) = yaw;
        FUN_0204bf88(effect);
        I(effect, 0xe4) |= 2;
    }
    I(self, 0x11c) = 1;
}
