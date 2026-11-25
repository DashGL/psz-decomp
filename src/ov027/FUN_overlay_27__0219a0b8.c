//cpp
// flags: -O4,s
struct Vec {
    union { struct { int x, y, z; }; int w[3]; };
    inline Vec() {}
    inline Vec(int a, int b, int c) { set(a, b, c); }
    inline void set(int a, int b, int c) { x = a; y = b; z = c; }
};

extern "C" {
extern void *DAT_02108cf4;
extern int DAT_0219c4dc[2];
extern void *FUN_020352a4(void *, int);
extern unsigned char *FUN_02039200(void *);
extern unsigned short FUN_overlay_27__02199a94(void *, Vec *);
#pragma thumb off
extern int FUN_0205c86c(Vec *);
#pragma thumb on
extern void FUN_02037910(void *, int);

void FUN_overlay_27__0219a0b8(unsigned char *self, unsigned int unused, int *packet, int count) {
    if ((*(int *)(self + 0x48) == *(int *)(self + 8)) ? 1 : 0) {
        unsigned char *actor;
        *(int *)(self + 0x58) = packet[0];
        actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, packet[0]));
        if (actor) {
            unsigned char *owner = *(unsigned char **)(self + 4);
            const Vec *tp = (const Vec *)(actor + 0x9c);
            Vec origin = *(Vec *)(owner + 0x38);
            Vec delta(tp->x - origin.x, tp->y - origin.y, tp->z - origin.z);
            unsigned short angle = FUN_overlay_27__02199a94(owner, &delta);
            if (angle <= 0x4000 && ((FUN_0205c86c(&delta) < DAT_0219c4dc[0]) ? 1 : 0)) {
                *(unsigned int *)(self + 0x5c) |= 1;
                FUN_02037910(self, *(int *)(self + 0x40));
            } else if (angle <= 0x4000 && ((FUN_0205c86c(&delta) < DAT_0219c4dc[1]) ? 1 : 0)) {
                *(unsigned int *)(self + 0x5c) |= 1;
                FUN_02037910(self, *(int *)(self + 0x44));
            } else {
                FUN_02037910(self, *(int *)(self + 0x4c));
            }
            *(unsigned int *)(self + 0x5c) &= ~2u;
        }
    } else if (count != -1) {
        unsigned int flags = *(unsigned int *)(self + 0x5c);
        if (!((flags & 1) ? 1 : 0) && !((flags & 4) ? 1 : 0)) {
            if (count >= 1) {
                *(unsigned int *)(self + 0x5c) |= 2;
            }
            FUN_02037910(self, *(int *)(self + 0x4c));
        }
    }
}
}
