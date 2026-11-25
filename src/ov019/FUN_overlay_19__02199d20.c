// flags: -O4,s
typedef struct { int x, y, z; } Vec;

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))

extern int DAT_0219d170[];
extern int DAT_0219d1e0;
extern int DAT_020fc988;
extern Vec DAT_020fc958;
extern short DAT_020ed83c[];

extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02037390(int *, const Vec *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void FUN_overlay_19__0219a59c(void *, void *);
extern void FUN_02036848(Vec *, const Vec *);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_overlay_19__02198920(Vec *, void *);
extern void FUN_020345f0(Vec *, const Vec *);
extern void FUN_02037ff0(void *, const Vec *);
extern void FUN_02090754(void *);
extern void FUN_0204bf88(void *);
extern int FUN_overlay_19__0219a504(void *, Vec *, const Vec *, const Vec *);
extern int FUN_0208546c(void);
extern int FUN_02037128(void *, Vec *, Vec *, Vec *, unsigned short);
extern void *FUN_overlay_19__02198c94(void *, int);
extern void *FUN_02075040(void *, int);

#pragma thumb off
extern int FUN_0205c86c(const Vec *);
#pragma thumb on

void FUN_overlay_19__02199d20(void *self, void *owner)
{
    Vec pred2, cand2a, inw2a, own2, cand2b, inw2b;
    Vec pred4, cand4a, inw4a, orig4a, own4, cand4b, inw4b, orig4b, pos4;
    Vec pos1;
    Vec target5, vel5, turned5;
    Vec pos_eff;
    Vec diff2, diff4, fwd1, sum1, orb1, org1, delta1, sc5, pos6, pos3, sc_end, unit_end;
    int rate, dist2a, dist2b, dist4a, dist4b, rad1, mag5, scale, ratio_buf, pulse;
    int ratio;
    int flag;
    void *effect;

    rate = I(owner, 0x188);
    {
        int step = I(self, 0x28) * 16;
        H(self, 0x5a) = (unsigned short)(step + (H(self, 0x5a) + 64));
    }
    pulse = (DAT_020ed83c[((H(self, 0x5a) >> 4) << 1) + 1] + 4096) >> 1;
    FUN_020bc610(&ratio_buf, &pulse, &rate);
    ratio = ratio_buf;
    H(self, 0x58) = (unsigned short)((H(self, 0x58) + (ratio >> 2)) + 112);

    switch (I(self, 0x24)) {
    case 2:
        I(self, 0x44) = 0;
        FUN_0203647c(&pred2, &V(self, 0xc), &V(self, 0x40));
        pred2.y = 0;
        FUN_02037390(&dist2a, &pred2);
        flag = !(dist2a < DAT_0219d170[24]);
        if (flag != 0) {
            cand2a = V(self, 0x40);
            cand2a.y = 0;
            inw2a = V(self, 0xc);
            FUN_020bbfbc(&inw2a, 32768);
            inw2a.y = 0;
            if (FUN_overlay_19__0219a504(self, &cand2a, &V(self, 0x40), &inw2a) == 1) {
                V(self, 0x40) = cand2a;
                FUN_overlay_19__0219a59c(self, owner);
            }
        } else {
            own2 = V(owner, 0x38);
            own2.y = 0;
            FUN_02036348(&diff2, &pred2, &own2);
            FUN_02037390(&dist2b, &diff2);
            flag = !(dist2b > DAT_0219d170[23]);
            if (flag != 0) {
                cand2b = V(self, 0x40);
                cand2b.y = 0;
                FUN_02036348(&inw2b, &V(self, 0xc), &own2);
                inw2b.y = 0;
                if (FUN_overlay_19__0219a504(self, &cand2b, &V(self, 0x40), &inw2b) == 1) {
                    V(self, 0x40) = cand2b;
                }
            }
        }
        FUN_02036848(&V(self, 0xc), &V(self, 0x40));
        break;
    case 4:
        FUN_0203647c(&pred4, &V(self, 0xc), &V(self, 0x40));
        pred4.y = 0;
        FUN_02037390(&dist4a, &pred4);
        flag = !(dist4a < DAT_0219d170[24]);
        if (flag != 0) {
            cand4a = V(self, 0x40);
            cand4a.y = 0;
            inw4a = V(self, 0xc);
            FUN_020bbfbc(&inw4a, 32768);
            inw4a.y = 0;
            orig4a = cand4a;
            if (FUN_overlay_19__0219a504(self, &cand4a, &orig4a, &inw4a) == 1) {
                I(self, 0x40) = cand4a.x;
                I(self, 0x48) = cand4a.z;
                FUN_overlay_19__0219a59c(self, owner);
            }
        } else {
            own4 = V(owner, 0x38);
            own4.y = 0;
            FUN_02036348(&diff4, &pred4, &own4);
            FUN_02037390(&dist4b, &diff4);
            flag = !(dist4b > DAT_0219d170[23]);
            if (flag != 0) {
                cand4b = V(self, 0x40);
                cand4b.y = 0;
                FUN_02036348(&inw4b, &V(self, 0xc), &own4);
                inw4b.y = 0;
                orig4b = cand4b;
                if (FUN_overlay_19__0219a504(self, &cand4b, &orig4b, &inw4b) == 1) {
                    I(self, 0x40) = cand4b.x;
                    I(self, 0x48) = cand4b.z;
                }
            }
        }
        FUN_0203647c(&pos4, &V(self, 0xc), &V(self, 0x40));
        if (I(self, 0x6c) > 8) {
            I(self, 0x24) = 3;
        } else {
            flag = !(pos4.y > DAT_0219d170[20]);
            if (flag != 0) {
                flag = !(I(self, 0x44) >= DAT_020fc988);
                if (flag != 0) {
                    I(self, 0x44) = DAT_0219d170[22];
                    I(self, 0x6c)++;
                }
            }
        }
        I(self, 0x44) += DAT_0219d170[21];
        FUN_02036848(&V(self, 0xc), &V(self, 0x40));
        break;
    case 1:
        FUN_020bc5cc(&rad1, &DAT_0219d1e0, &rate);
        fwd1.x = 0;
        fwd1.y = 0;
        fwd1.z = 4096;
        FUN_02091cc0(&pos1, &fwd1, &rad1);
        {
            unsigned short angle = H(self, 0x58);
            orb1 = pos1;
            FUN_020bbfbc(&orb1, angle);
        }
        FUN_overlay_19__02198920(&org1, owner);
        FUN_0203647c(&sum1, &orb1, &org1);
        pos1 = sum1;
        pos1.y = ratio + 4096;
        FUN_02036348(&delta1, &pos1, &V(self, 0xc));
        V(self, 0x40) = delta1;
        V(self, 0xc) = pos1;
        break;
    case 5: {
        void *actor;
        V(self, 0x40) = DAT_020fc958;
        actor = FUN_overlay_19__02198c94(self, FUN_0208546c());
        if (!actor) {
            I(self, 0x24) = 3;
        } else {
            target5.x = 0;
            target5.y = 0;
            target5.z = -4096;
            FUN_020345f0(&vel5, &V(actor, 0x9c));
            mag5 = FUN_0205c86c(&vel5);
            turned5.x = 0;
            turned5.y = 0;
            turned5.z = 0;
            FUN_02037128(owner, &turned5, &vel5, &target5, 192);
            FUN_02091cc0(&sc5, &turned5, &mag5);
            V(self, 0xc) = sc5;
            FUN_02037ff0(actor, &V(self, 0xc));
            I(self, 0x10) = ratio + 4096;
            I(self, 0x70) = (I(self, 0x70) + 1) % 15;
            if (!I(self, 0x70)) {
                FUN_02090754(actor);
            }
        }
        break;
    }
    case 6: {
        void *actor;
        V(self, 0x40) = DAT_020fc958;
        actor = FUN_overlay_19__02198c94(self, I(self, 0x2c));
        if (!actor) {
            I(self, 0x24) = 3;
        } else {
            FUN_020345f0(&pos6, &V(actor, 0x9c));
            V(self, 0xc) = pos6;
            I(self, 0x10) = ratio + 4096;
        }
        break;
    }
    case 3:
        FUN_0203647c(&pos3, &V(self, 0xc), &V(self, 0x40));
        V(self, 0xc) = pos3;
        break;
    }

    scale = 0;
    switch (I(self, 0x24)) {
    case 3:
        scale = I(self, 0x50) - DAT_0219d170[25];
        scale = (scale > 0) ? scale : 0;
        flag = !(scale > DAT_020fc988);
        if (flag != 0) {
            I(self, 0x1c) = 1;
        }
        break;
    case 5:
    case 6:
        scale = I(self, 0x50) + DAT_0219d170[25];
        scale = (scale < 6144) ? scale : 6144;
        break;
    default:
        scale = I(self, 0x50) + DAT_0219d170[25];
        scale = (scale < 4096) ? scale : 4096;
        break;
    }

    unit_end.x = 4096;
    unit_end.y = 4096;
    unit_end.z = 4096;
    FUN_02091cc0(&sc_end, &unit_end, &scale);
    V(self, 0x4c) = sc_end;

    effect = FUN_02075040(owner, I(self, 0x30));
    if (effect) {
        V(effect, 0x50) = V(self, 0x4c);
        V(effect, 0x5c) = V(self, 0xc);
        H(effect, 0x6a) = (unsigned short)(H(self, 0x5a) * 2);
        FUN_0204bf88(effect);
        H(effect, 0x68) = (unsigned short)(H(self, 0x58) * 2);
        FUN_0204bf88(effect);
    }

    effect = FUN_02075040(owner, I(self, 0x34));
    if (effect) {
        pos_eff = V(self, 0xc);
        pos_eff.y = 0;
        V(effect, 0x50) = V(self, 0x4c);
        V(effect, 0x5c) = pos_eff;
    }

    I(self, 0x68)++;
}
