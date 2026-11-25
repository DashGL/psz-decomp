// flags: -O4,s
typedef struct { int x, y, z; } Vec;

extern int DAT_020fc988;
extern int DAT_0219d170[];
extern int DAT_0219d1ac;
extern int FUN_02036c34(void *);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_02036848(Vec *, const Vec *);
extern void FUN_02037390(int *, const Vec *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void *FUN_overlay_19__0219848c(void *, int);
extern void *FUN_020ba894(int);
extern void *FUN_overlay_19__0219933c(void *, const void *);
extern void FUN_overlay_19__021992f4(void *);
extern void FUN_overlay_19__02198438(void *, void *);
extern int FUN_overlay_19__02198418(void *);
extern void FUN_02037214(void *, int, int, const Vec *, int);
extern int FUN_02074e9c(void *, int, int, int);
extern void *FUN_02075040(void *, int);

#define I(p, o) (*(int *)((char *)(p) + (o)))
#define V(p, o) (*(Vec *)((char *)(p) + (o)))

static inline Vec make_vec(int x, int y, int z) {
    Vec v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

void FUN_overlay_19__0219a8e4(char *self, char *owner) {
    Vec radial;
    Vec radial2;
    Vec target;
    int desc[16];
    Vec forward;
    Vec zero;
    Vec scale1;
    Vec scale4;
    Vec fallback;
    Vec scale_desc;
    Vec step;
    volatile int length;
    int delta;
    int flag;

    delta = FUN_02036c34(owner);
    FUN_02091cc0(&step, &V(self, 0x40), &delta);
    FUN_02036848(&V(self, 0xc), &step);

    radial = V(self, 0xc);
    radial.y = DAT_020fc988;
    FUN_02037390((int *)&length, &radial);
    flag = (length > DAT_0219d170[14]);
    if (flag != 0) {
        forward.x = 0;
        forward.y = 0;
        forward.z = 0x1000;
        FUN_02091cc0(&radial2, &forward, &DAT_0219d1ac);
        FUN_020bbfbc(&radial2, *(unsigned short *)(self + 0x18));
        radial2.y = DAT_0219d170[12];
        V(self, 0xc) = radial2;
        zero.x = 0;
        zero.y = 0;
        zero.z = 0;
        V(self, 0x40) = zero;
    }

    switch (*(unsigned int *)(self + 0x24)) {
    case 1: {
        int s = DAT_0219d170[13] + I(self, 0x34);
        if (s >= 0x1000) s = 0x1000;
        scale1.x = s;
        scale1.y = s;
        scale1.z = s;
        V(self, 0x34) = scale1;
        break;
    }
    case 4: {
        int s = I(self, 0x34) - DAT_0219d170[13];
        if (s >= 0x1000) s = 0x1000;
        scale4.x = s;
        scale4.y = s;
        scale4.z = s;
        V(self, 0x34) = scale4;
        if (s <= 0) {
            I(self, 0x1c) = 1;
        }
        break;
    }
    case 2: {
        if (I(self, 0x20) >= I(self, 0x4c)) {
            void *other = FUN_overlay_19__0219848c(owner, (I(self, 0x28) + 4) % 8);
            if (other != 0) {
                target = V(other, 0xc);
            } else {
                fallback = V(self, 0xc);
                FUN_020bbfbc(&fallback, 0x8000);
                target = fallback;
            }
            FUN_overlay_19__021992f4(desc);
            desc[0] = DAT_0219d170[11];
            V(desc, 0x10) = target;
            desc[13] = 1;
            V(desc, 4) = V(self, 0xc);
            desc[10] = 3;
            scale_desc.x = 0x800;
            scale_desc.y = 0x800;
            scale_desc.z = 0x1000;
            V(desc, 0x1c) = scale_desc;
            if (FUN_overlay_19__02198418(owner) == 1) {
                void *child = FUN_020ba894(0x7c);
                if (child != 0) {
                    child = FUN_overlay_19__0219933c(child, desc);
                }
                FUN_overlay_19__02198438(owner, child);
            }
            FUN_02037214(owner, 0x1d, 4, &V(self, 0xc), 1);
            I(self, 0x20) = 0;
            I(self, 0x4c) = DAT_0219d170[11];
            I(self, 0x24) = 3;
        }
        break;
    }
    case 3:
        if (I(self, 0x20) >= I(self, 0x4c)) {
            I(self, 0x24) = 4;
        }
        break;
    }

    I(self, 0x20) += FUN_02036c34(owner);
    if (I(self, 0x30) == -1) {
        I(self, 0x30) = FUN_02074e9c(owner, 4, 1, 0);
    }
    {
        char *effect = (char *)FUN_02075040(owner, I(self, 0x30));
        if (effect != 0) {
            V(effect, 0x5c) = V(self, 0xc);
            V(effect, 0x50) = V(self, 0x34);
            *(volatile unsigned int *)(effect + 0xe4) |= 0x10000;
            *(volatile unsigned int *)(effect + 0xe4) |= 0x20000;
            *(volatile unsigned int *)(effect + 0xe4) &= ~1u;
        }
    }
    if (I(owner, 0x184) == 0) {
        I(self, 0x24) = 4;
    }
}
