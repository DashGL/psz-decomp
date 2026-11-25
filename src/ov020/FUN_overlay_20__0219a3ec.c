//cpp
// flags: -O4,s
struct Vec { union { struct { int x, y, z; }; int w[3]; }; };
struct Query {
    int id, a, b;
    Vec pos;
    unsigned short yaw, angle;
    unsigned int flags;
};

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))

extern "C" {
extern void *DAT_02108d5c;
extern void *DAT_02108cf4;
extern int DAT_020fc988;
}

#pragma thumb off
extern "C" unsigned short FUN_0205cc08(int);
#pragma thumb on

extern "C" {
extern void *FUN_02040004(void *, int);
extern void *FUN_020352a4(void *, int);
extern int FUN_02035b60(int);
extern int FUN_020865fc(void *);
extern void FUN_02036368(Vec *);
extern void FUN_overlay_20__0219a798(void *);
extern void FUN_overlay_20__0219a7c4(void *, int);
extern void FUN_overlay_20__0219a7f0(void *, int);
}

extern "C" void FUN_overlay_20__0219a3ec(void *self, void *command) {
    void *owner = P(self, 4), *stats;
    int threshold, x, z, i;
    unsigned short angle, yaw;
    Vec direction;
    Query query1, query2, query3;

    if (!((I(owner, 0xec) & 0x40) ? 1 : 0) && I(self, 0x98) <= 0) {
        B(command, 0) |= 1;
        B(command, 1) = 1;
        return;
    }
    stats = FUN_02040004(DAT_02108d5c, B(P(P(owner, 0x14), 0), 0));
    threshold = (int)(((long long)*(short *)stats * 0x19a + 2048) >> 12);
    if (I(self, 0xa8) >= threshold) {
        B(command, 0) |= 1;
        if ((I(owner, 0xec) & 0x40) ? 1 : 0) {
            B(command, 1) = 14;
            B(command, 0x10) = (signed char)FUN_02035b60(2);
            B(command, 0x12) = 1;
            H(command, 0x22) = 0x222;
            H(command, 0x20) = 90;
            I(command, 4) = I(self, 0xc0);
        } else {
            B(command, 1) = 8;
        }
        x = FUN_02035b60(0x6000) + 0x1800;
        z = FUN_02035b60(0xa000) + 0xa000;
        {
            Vec *pos = (Vec *)((char *)owner + 0x38);
            if (pos->x > 0) x *= -1;
            if (pos->z > 0) z *= -1;
        }
        direction.x = -x;
        direction.y = 0;
        direction.z = -z;
        FUN_02036368(&direction);
        angle = FUN_0205cc08(direction.z);
        if (direction.x < 0) angle = (unsigned short)(0x10000 - angle);
        I(command, 0x24) = x;
        I(command, 0x28) = z;
        H(command, 0x2c) = angle;
        return;
    }
    if (I(self, 0xac) >= 10) {
        B(command, 0) |= 1;
        B(command, 1) = 4;
        return;
    }
    threshold = (int)(((long long)*(short *)((char *)owner + 0x18) * 0x333 + 2048) >> 12);
    if (I(self, 0x9c) >= threshold) {
        B(command, 0) |= 1;
        H(command, 0x22) = 0x222;
        H(command, 0x20) = 90;
        B(command, 1) = 2;
        if ((I(owner, 0xec) & 0x40) ? 1 : 0) H(command, 8) = 240;
        else H(command, 8) = 150;
        return;
    }
    if (!((I(owner, 0xec) & 0x80) ? 1 : 0)) {
        for (i = 0; i <= 3; i++) {
            if (FUN_020352a4(DAT_02108cf4, i)) {
                yaw = H(owner, 0x44);
                FUN_overlay_20__0219a798(&query1);
                query1.pos = V(owner, 0x38);
                query1.yaw = yaw;
                query1.angle = 0x555;
                query1.flags |= 4;
                FUN_overlay_20__0219a7c4(&query1, 0xc800);
                FUN_overlay_20__0219a7f0(&query1, 0x11800);
                query1.id = I(self, 0xc0);
                if (FUN_020865fc(&query1)) {
                    B(command, 0) |= 1;
                    B(command, 1) = 5;
                    B(command, 13) = 1;
                    I(command, 4) = i;
                    return;
                }
            }
        }
        for (i = 0; i <= 3; i++) {
            if (FUN_020352a4(DAT_02108cf4, i)) {
                unsigned short yaw2 = H(owner, 0x44);
                FUN_overlay_20__0219a798(&query2);
                query2.pos = V(owner, 0x38);
                query2.yaw = yaw2;
                query2.angle = 0x471;
                query2.flags |= 4;
                FUN_overlay_20__0219a7c4(&query2, 0x8000);
                FUN_overlay_20__0219a7f0(&query2, 0xa000);
                query2.id = I(self, 0xc0);
                if (FUN_020865fc(&query2)) {
                    B(command, 0) |= 1;
                    B(command, 1) = 5;
                    B(command, 12) = 1;
                    I(command, 4) = i;
                    return;
                }
            }
        }
    }
    if ((I(self, 0xbc) <= DAT_020fc988) ? 1 : 0) {
        for (i = 0; i <= 3; i++) {
            if (FUN_020352a4(DAT_02108cf4, i)) {
                unsigned short yaw3 = H(owner, 0x44);
                FUN_overlay_20__0219a798(&query3);
                query3.pos = V(owner, 0x38);
                query3.yaw = yaw3;
                query3.angle = 0x2000;
                query3.flags |= 4;
                FUN_overlay_20__0219a7c4(&query3, 0xf000);
                FUN_overlay_20__0219a7f0(&query3, 0x32000);
                query3.id = I(self, 0xc0);
                if (FUN_020865fc(&query3)) {
                    B(command, 0) |= 1;
                    B(command, 1) = 6;
                    H(command, 0x22) = 0x222;
                    H(command, 0x20) = 90;
                    I(command, 4) = i;
                    if ((I(owner, 0xec) & 0x40) ? 1 : 0) {
                        if (!FUN_02035b60(2)) {
                            B(command, 1) = 15;
                            B(command, 0x12) = 1;
                            B(command, 0x13) = 1;
                            B(command, 0x11) = 1;
                        } else {
                            B(command, 0x12) = 3;
                            B(command, 0x10) = 1;
                        }
                    } else if (!FUN_02035b60(2)) {
                        B(command, 0x12) = 1;
                    } else {
                        B(command, 0x10) = 1;
                        B(command, 0x12) = 1;
                    }
                    return;
                }
            }
        }
    }
}
