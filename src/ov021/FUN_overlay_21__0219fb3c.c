// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern void *DAT_02108cf4, *DAT_02108d04;
extern int DAT_021a1a18;
extern short DAT_020ed83c[];
extern void *FUN_020352a4(void *, int), *FUN_02039200(void *), *FUN_02075040(void *, int);
extern int FUN_0203bf3c(void *), FUN_0203ae60(void *), FUN_02090c20(void), FUN_02074e9c(void *, int, int, int), FUN_02040d2c(void *, int), FUN_0208546c(void);
extern void FUN_02094860(void *), FUN_02094878(void *), FUN_02090f74(short *, int, Vec3 *, int), FUN_020c193c(int, int, int, int, int);
extern void FUN_02037ff0(void *, Vec3 *), FUN_02040c0c(void *, int, int, int, int), FUN_02037924(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_21__0219fb3c(void *self) {
    void *owner = P(self, 8), *actor = P(self, 4), *target, *effect;
    Vec3 position;
    short screen1[2], screen2[2];
    long long speed;
    int index, current_id;
    if (I(self, 0xc) == 0) {
        target = FUN_02039200(FUN_020352a4(DAT_02108cf4, I(self, 0x1c)));
        if (target && FUN_0203bf3c(target)) {
            if (I(self, 0x24) == 20) {
                if (!FUN_0203ae60(target)) FUN_02094860(target);
                FUN_02090f74(screen1, FUN_02090c20(), &V(self, 0x10), 0);
                FUN_020c193c(26, 18, screen1[0], screen1[1], 4);
            } else if ((unsigned)I(self, 0x24) >= 20 && (unsigned)I(self, 0x24) < 30) {
                int x, z;
                index = (H(actor, 0x44) >> 4) * 2;
                x = DAT_020ed83c[index];
                z = DAT_020ed83c[index + 1];
                speed = DAT_021a1a18;
                I(self, 0x10) += (int)(((long long)x * speed + 0x800) >> 12);
                I(self, 0x18) += (int)(((long long)z * speed + 0x800) >> 12);
            } else if (I(self, 0x24) == 30) {
                I(self, 0x20) = FUN_02074e9c(actor, 13, 0, 0);
                position = V(self, 0x10);
                position.y = 0;
                effect = FUN_02075040(actor, I(self, 0x20));
                if (effect) {
                    V(effect, 0x5c) = position;
                    I(effect, 0xe4) |= 0x4000;
                }
                FUN_02090f74(screen2, FUN_02090c20(), &V(self, 0x10), 0);
                FUN_020c193c(26, 19, screen2[0], screen2[1], 4);
            }
            FUN_02037ff0(target, &V(self, 0x10));
        }
    }
    if (FUN_02040d2c(actor, 0)) {
        switch (I(self, 0xc)) {
        case 0:
            FUN_02040c0c(actor, 0, 4, 0x1000, 0);
            I(self, 0xc) = 1;
            break;
        case 1:
            target = FUN_02039200(FUN_020352a4(DAT_02108cf4, I(self, 0x1c)));
            if (target) {
                if (!FUN_0203ae60(target)) FUN_02094878(target);
                current_id = FUN_0208546c();
                if (I(self, 0x1c) == current_id)
                    ((void (*)(void *))(*(void ***)((char *)DAT_02108d04))[46])(DAT_02108d04);
            }
            I(owner, 0x80) = 1;
            FUN_02037924(owner);
            break;
        }
        I(self, 0x24) = 0;
    }
    ++I(self, 0x24);
}
