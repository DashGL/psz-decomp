// FUN_overlay_13__0211ed38 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_13__0211ed38 @ 0x0211ed38 (code 0x1bc, thumb)
// check: vers=2.0/sp2p3 target=0x1bc candidate=0x1bc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
struct Short8 {
    unsigned short w[8];
};
struct Ov13Local {
    struct Short8 s1;
    struct Short8 s2;
    unsigned char b[0x44];
};
struct Ov13Slot {
    unsigned char pad0[0x14];
    struct Short8 s1;
    struct Short8 s2;
    signed char b34[4];
    unsigned char b38[8];
    unsigned char b40;
    unsigned char pad41[0xf];
};
extern int FUN_020c2e38(void);
extern int FUN_02073120(void);
extern void FUN_overlay_13__0211ef30(void *, int);
extern int FUN_02073310(void);
extern void FUN_020b3088(void *, int);
extern struct Ov13Slot *FUN_020734f4(void);
extern void *FUN_020a4448(void);
extern int FUN_020b3bc8(void *);
extern void FUN_020a47bc(void *, int);
extern int FUN_020a47f0(void *, int);
extern void FUN_020c4434(void *);
extern int FUN_020b3cbc(void *, int);
extern void FUN_020a46c4(void *, int, void *, int);

int FUN_overlay_13__0211ed38(int *self)
{
    struct Ov13Local loc;
    struct Ov13Slot *slots;
    void *mgr;
    int i;

    if (FUN_020c2e38() != 0) {
        return 1;
    }

    if (self[2] != 2 && self[1] == 1 && FUN_02073120() == 0) {
        self[2] = 2;
        FUN_overlay_13__0211ef30(self, 0);
    }

    switch (self[2]) {
    case 1:
        if (FUN_02073310() == 2) {
            self[2] = 3;
        }
        break;
    case 0:
        if (FUN_02073310() == 1) {
            self[2] = 1;
            FUN_overlay_13__0211ef30(self, 0);
        }
        break;
    }

    if (self[0x13] != 0) {
        FUN_020b3088((void *)self[0x13], 1);
    }

    slots = FUN_020734f4();
    mgr = FUN_020a4448();

    if (slots != 0) {
        if (self[3] != 0) {
            for (i = 0; i < 4; i++) {
                if (FUN_020b3bc8(&slots[i]) == 0) {
                    FUN_020a47bc(mgr, 0);
                    self[3] = 0;
                    break;
                }
            }
        }
        if (self[3] == 0) {
            for (i = 0; i < 4; i++, slots++) {
                if (FUN_020b3bc8(slots) == 0) {
                    if (FUN_020a47f0(mgr, i) == 0) {
                        FUN_020c4434(&loc.s1);
                        FUN_020c4434(&loc.s2);
                        loc.s1 = slots->s1;
                        loc.s2 = slots->s2;
                        loc.b[0] = (unsigned char)slots->b34[0];
                        loc.b[1] = (unsigned char)slots->b34[1];
                        loc.b[2] = (unsigned char)slots->b34[2];
                        loc.b[3] = (unsigned char)slots->b34[3];
                        loc.b[4] = slots->b38[0];
                        loc.b[5] = slots->b38[1];
                        loc.b[6] = slots->b38[2];
                        loc.b[7] = slots->b38[3];
                        loc.b[8] = slots->b38[4];
                        loc.b[9] = slots->b38[5];
                        loc.b[10] = slots->b38[6];
                        loc.b[11] = slots->b38[7];
                        loc.b[0x36] = slots->b40;
                        FUN_020a46c4(mgr, i, &loc, FUN_020b3cbc(slots, 0));
                    }
                } else if (FUN_020a47f0(mgr, i) != 0) {
                    FUN_020a47bc(mgr, i);
                }
            }
        }
    }

    if (self[2] >= 0 && self[2] < 4) {
        self[0x14]--;
        if (self[0x14] <= 0) {
            FUN_overlay_13__0211ef30(self, !self[0x15]);
        }
    }

    return 1;
}
