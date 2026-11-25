// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
extern int DAT_020ed0a0;
extern int FUN_02074e9c(void *, int, int, int), FUN_02072650(void *, int, int, int), FUN_02036c34(void *);
extern void *FUN_02075040(void *, int);
extern void FUN_02072724(void *, int), FUN_02072750(void *, int, Vec3 *), FUN_02037214(void *, int, int, Vec3 *, int);
void FUN_overlay_19__02199070(void *self, void *actor) {
    void *effect;
    int scale, sentinel, delta;
    Vec3 size1, size2;
    if (I(self, 0x30) == -1) I(self, 0x30) = FUN_02074e9c(actor, 6, 1, 0);
    if (I(self, 0x20) >= 0x4c000) { scale = (0x5c000 - I(self, 0x20)) >> 4; if (scale >= 0x1000) scale = 0x1000; }
    else { scale = I(self, 0x20) >> 4; if (scale >= 0x1000) scale = 0x1000; }
    effect = FUN_02075040(actor, I(self, 0x30));
    if (effect) { size1.x = scale; size1.y = 0x1000; size1.z = scale; V(effect, 0x50) = size1; V(effect, 0x5c) = V(self, 0xc); }
    if (I(self, 0x20) >= 0x10000) {
        if (I(self, 0x34) == -1) I(self, 0x34) = FUN_02074e9c(actor, 1, 0, 0);
        effect = FUN_02075040(actor, I(self, 0x34));
        if (effect) { size2.x = 0x200; size2.y = 0x200; size2.z = 0x200; V(effect, 0x50) = size2; V(effect, 0x5c) = V(self, 0xc); I(effect, 0xe4) |= 0x4000; }
    }
    if (I(self, 0x20) >= 0x10000) {
        if (I(self, 0x38) == -1) {
            I(self, 0x38) = FUN_02074e9c(actor, 7, 0, 0);
            if (I(self, 0x44) == 1) FUN_02037214(actor, 29, 9, &V(self, 0xc), 1);
        }
        effect = FUN_02075040(actor, I(self, 0x38));
        if (effect) { V(effect, 0x5c) = V(self, 0xc); I(effect, 0xe4) |= 0x4000; }
    }
    if (I(self, 0x20) >= 0x29000) {
        sentinel = DAT_020ed0a0;
        if (I(self, 0x3c) != sentinel) { FUN_02072724(actor, I(self, 0x3c)); I(self, 0x3c) = sentinel; }
    } else if (I(self, 0x20) >= 0x15000 && I(self, 0x3c) == DAT_020ed0a0) {
        I(self, 0x3c) = FUN_02072650(actor, 5, 0, 0); FUN_02072750(actor, I(self, 0x3c), &V(self, 0xc));
    }
    if (I(self, 0x20) >= 0x48000) {
        sentinel = DAT_020ed0a0;
        if (I(self, 0x40) != sentinel) { FUN_02072724(actor, I(self, 0x40)); I(self, 0x40) = sentinel; }
    } else if (I(self, 0x20) >= 0x34000 && I(self, 0x40) == DAT_020ed0a0) {
        I(self, 0x40) = FUN_02072650(actor, 6, 0, 0); FUN_02072750(actor, I(self, 0x40), &V(self, 0xc));
        if (I(self, 0x44) == 1) FUN_02037214(actor, 29, 10, &V(self, 0xc), 1);
    }
    if (I(self, 0x20) >= 0x5c000) I(self, 0x1c) = 1;
    delta = FUN_02036c34(actor); I(self, 0x20) += delta;
}
