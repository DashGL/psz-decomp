//cpp
// flags: -O4,s
struct Vec {
    union {
        struct { int x, y, z; };
        int w[3];
    };
};

#define I(p, o) (*(int *)((char *)(p) + (o)))
#define U(p, o) (*(unsigned int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define V(p, o) (*(Vec *)((char *)(p) + (o)))
#define FX(a, b) ((int)(((long long)(a) * (b) + 2048) >> 12))

extern "C" {
extern void *DAT_02108cf4;
extern unsigned char DAT_021a199c[];
extern int DAT_021a19a4;

#pragma thumb off
extern void FUN_0205c8cc(Vec *, Vec *);
#pragma thumb on

extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020bc658(int *, const int *);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_020437d8(int, int, int, int, int);
extern void FUN_02090f74(short *, void *, const Vec *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_02037ff0(void *, const Vec *);
extern void FUN_02037924(void *);
extern int FUN_0208546c(void);
extern int FUN_0203ae60(void *);
extern int FUN_02040d2c(void *, int);
extern int FUN_0203bf3c(void *);
extern void *FUN_02090c20(void);

void FUN_overlay_21__0219f5a0(void *self) {
    Vec pos1;
    Vec delta;
    Vec pos2;
    int xoriginal;
    int force;
    short screen[2];
    int scaled;
    int absoriginal;
    int absforce;
    void *part = P(self, 8);
    void *owner = P(self, 4);
    void *actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, I(self, 0x1c)));

    if (actor) {
        switch (I(self, 0xc)) {
        case 0: {
            pos1 = V(owner, 0x38);
            int dz = pos1.z - I(self, 0x18);
            int dy = pos1.y - I(self, 0x14);
            int dx = pos1.x - I(self, 0x10);
            delta.x = dx;
            delta.y = dy;
            ((volatile Vec *)&delta)->y = 0;
            ((volatile Vec *)&delta)->z = dz;
            int distance = FX(delta.z, delta.z) + (FX(delta.x, delta.x) + FX(delta.y, delta.y));
            if ((distance < I(DAT_021a199c, 0)) ? 1 : 0) {
                V(self, 0x10) = pos1;
                FUN_02040c0c(owner, 0, 5, 4096, 0);
                I(self, 0xc) = 1;
                I(self, 0x20) = 0;
            } else {
                xoriginal = dx;
                if (delta.x || delta.w[1] || delta.w[2]) {
                    FUN_0205c8cc(&delta, &delta);
                }
                int speed = I(DAT_021a199c, 0xc);
                delta.x = FX(delta.x, speed);
                delta.y = FX(delta.y, speed);
                delta.z = FX(delta.z, speed);
                scaled = delta.x;
                FUN_020bc5cc(&force, &scaled, &DAT_021a19a4);
                FUN_020bc658(&absforce, &force);
                FUN_020bc658(&absoriginal, &xoriginal);
                if ((absoriginal > absforce) ? 1 : 0) {
                    delta.x = force;
                }
                I(self, 0x10) += delta.x;
                I(self, 0x14) += delta.y;
                I(self, 0x18) += delta.z;
            }
            break;
        }
        case 2:
            if (U(self, 0x20) % 30 == 15 && I(self, 0x1c) == FUN_0208546c() && !FUN_0203ae60(actor)) {
                FUN_020437d8(I(owner, 0xc), 13, I(self, 0x1c), 0, 0);
                pos2 = V(owner, 0x38);
                FUN_02090f74(screen, FUN_02090c20(), &pos2, 0);
                FUN_020c193c(0x1a, 15, screen[0], screen[1], 4);
            }
            break;
        }
        FUN_02037ff0(actor, &V(self, 0x10));
    } else {
        I(part, 0x80) = 10;
        FUN_02037924(part);
    }

    if (FUN_02040d2c(owner, 0)) {
        if (I(self, 0xc) == 1) {
            FUN_02040c0c(owner, 0, 6, 4096, 0);
            I(self, 0xc) = 2;
        }
        I(self, 0x20) = 0;
    } else if (I(self, 0xc) == 2) {
        int reason = 0;
        if (U(self, 0x20) > 150 || I(part, 0xf4)) {
            reason = 10;
        } else if (*(short *)((char *)owner + 0x18) / 20 < I(part, 0xa4)) {
            reason = 9;
        }
        if (reason) {
            actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, I(self, 0x1c)));
            if (actor && FUN_0203bf3c(actor)) {
                I(actor, 0xf8) |= 2;
            }
            I(part, 0x80) = reason;
            FUN_02037924(part);
        }
    }
    I(self, 0x20)++;
}
}
