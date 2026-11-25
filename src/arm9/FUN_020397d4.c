//cpp
// flags: -O4,s
#pragma always_inline on
#pragma block_assign on

typedef struct { unsigned int x, y, z; } Vec;
typedef struct { unsigned char b[4]; } Key4;
enum { E0 = 0, E1 = 1 };

#define I(p, o) (*(int *)((char *)(p) + (o)))
#define U(p, o) (*(unsigned int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))
#define B(p, o) (*(unsigned char *)((char *)(p) + (o)))
#define C(p, o) (*(signed char *)((char *)(p) + (o)))

extern "C" {
extern void *DAT_02108c64;
extern short DAT_020ed83c[];
extern void *DAT_02108d08;

extern void FUN_0203a258(void *), FUN_0203a594(void *), FUN_0203af64(void *), FUN_0203b10c(void *), FUN_0203b06c(void *), FUN_020946a0(void *), FUN_020426b8(void *), FUN_02038154(void *), FUN_0203819c(void *), FUN_0204267c(void *), FUN_0204faf8(void *), FUN_02038e40(void *), FUN_0203c17c(void *), FUN_020b0a44(void *), FUN_020472bc(void *);
extern int FUN_0203aecc(void *), FUN_0203b41c(void *), FUN_0203b7e0(void *), FUN_02038774(void *), FUN_020387ac(void *), FUN_0203a1fc(void *), FUN_020b0ed0(void *), FUN_02085880(void *), FUN_020a4304(void *);
extern int FUN_0206d36c(void *, int), FUN_0203a1a8(void *, int), FUN_02042418(void *, int), FUN_02038404(void *, int), FUN_0203ef54(void *, int);
extern unsigned int FUN_0203a1bc(int *);
extern void *FUN_02085640(void), *FUN_0204f3b8(void), *FUN_0204a580(void), *FUN_02034b8c(void *, int), *FUN_020b0990(void *, int, int, int, void *, unsigned short);
extern void FUN_0204fbec(void *, int), FUN_02032dfc(void *, void *), FUN_0203a6f8(void *, void *), FUN_02039534(void *, void *), FUN_0203955c(void *), FUN_0204f458(void *, void *), FUN_0203a9a4(void *, int), FUN_0204a670(void *, void *), FUN_0203eee4(void *, int), FUN_02038320(void *, int), FUN_020345f0(void *, void *);
extern void *FUN_02034680(void *, void *);
extern void FUN_0206f93c(void *, int, int), FUN_02038700(void *, int, int), FUN_0203a850(void *, void *, int), FUN_0203b8a0(void *, int, void *, int), FUN_0204b3ac(void *, int, int, int), FUN_02035408(void *, unsigned int, unsigned int, unsigned int), FUN_020c193c(int, int, int, int, int), FUN_020c1d7c(int, int, int, int, int);
}

static inline int has_flag(char *s, unsigned int mask) {
    if (U(s, 248) & mask) return 1;
    return 0;
}

static inline int is_mstate(void *m, int st) {
    if (I(m, 236) == st) return 1;
    return 0;
}

static inline int has_pflag(void *p, unsigned int mask) {
    if (U(p, 0) & mask) return 1;
    return 0;
}

extern "C" void FUN_020397d4(char *s) {
    Vec v19, vpost, pos;
    int record1[5];
    Vec v21;
    int record2[5];
    int diff[2];
    Key4 small;
    int i, hide, value, index;
    void *p;

    I(s, 584) = -4096;
    if (P(s, 140)) {
        FUN_0203a258(s);
        FUN_0203a594(s);
        if (has_flag(s, 2) || !FUN_0203aecc(s)) {
            U(P(s, 140), 24) &= ~1u;
            if (P(s, 432)) FUN_0204fbec(P(s, 432), 0);
            if (P(s, 436)) FUN_0204fbec(P(s, 436), 0);
            if (P(s, 224)) U(P(s, 224), 228) |= 1;
        } else {
            U(P(s, 140), 24) |= 1;
            hide = 1;
            FUN_02032dfc(record1, DAT_02108c64);
            if (!FUN_0206d36c(record1, 0)) {
                small = *(Key4 *)(s + 384);
                if (!FUN_0203a1a8(&small, 0)) hide = 0;
            }
            if (!hide && P(s, 432)) {
                if (has_flag(s, 32)) {
                    if (C(s, 512) < 0) {
                        C(s, 512)++;
                        if (!C(s, 512)) U(s, 248) &= ~32u;
                    }
                    FUN_0204fbec(P(s, 432), 0);
                } else {
                    FUN_0204fbec(P(s, 432), 1);
                }
            }
            if (P(s, 224)) U(P(s, 224), 228) &= ~1u;
            if (P(s, 436)) {
                if (has_flag(s, 64)) FUN_0204fbec(P(s, 436), 0);
                else FUN_0204fbec(P(s, 436), 1);
            }
        }
        if (!has_flag(s, 1)) {
            index = ((int)H(s, 194) >> 4) * 2;
            FUN_0203af64(s);
            U(s, 156) += (int)(U(s, 256) * (int)DAT_020ed83c[index]) >> 12;
            U(s, 164) += (int)(U(s, 256) * (int)DAT_020ed83c[index + 1]) >> 12;
            if (!FUN_0203b41c(s) && I(s, 576) != 8) {
                U(s, 156) += U(s, 272);
                U(s, 164) += U(s, 280);
            }
            U(s, 260) = U(s, 256);
            FUN_02034680(s + 284, s + 272);
            U(s, 256) = 0;
            U(s, 272) = 0;
            U(s, 276) = 0;
            U(s, 280) = 0;
        } else {
            if (!FUN_0203b41c(s) && I(s, 576) != 8) {
                U(s, 156) += U(s, 272);
                U(s, 164) += U(s, 280);
            }
            U(s, 272) = 0;
            U(s, 276) = 0;
            U(s, 280) = 0;
        }
        FUN_0203b10c(s);
        if (I(s, 576) == 3 || I(s, 576) == 5 || I(s, 576) == 6) FUN_0203b06c(s);
        switch (I(s, 576)) {
        case 25:
            FUN_0203a6f8(s, s + 384);
            I(s, 576) = 24;
            break;
        case 12:
            if (FUN_02042418(P(s, 140), 0)) U(s, 248) &= ~256u;
            break;
        case 19:
            p = FUN_02085640();
            if (p) {
                v19 = *(Vec *)((char *)p + 156);
                int dz = U(s, 188) - v19.z;
                int dx = U(s, 180) - v19.x;
                diff[0] = dx;
                diff[1] = dz;
                U(s, 584) = FUN_0203a1bc(diff);
            }
            FUN_020c1d7c(0, 20, 0, 0, -1);
            break;
        case 24:
            FUN_02032dfc(record2, DAT_02108c64);
            if (FUN_0206d36c(record2, 0) == 0) {
                value = FUN_0203b7e0(s);
            } else {
                if (C(s, 69) == 0) value = 54;
                else value = 55;
            }
            if (I(s, 204) == value) {
                if (!FUN_0203a1fc(s + 400)) {
                    FUN_02039534(s + 384, s + 400);
                    I(s, 576) = 25;
                    FUN_0203955c(s + 400);
                } else {
                    I(s, 576) = 0;
                    FUN_020946a0(s);
                    U(s, 248) &= ~32u;
                }
            } else if (FUN_02038404(s, value) == 1) {
                I(s, 204) = value;
                I(s, 576) = 23;
            }
            break;
        case 23:
            if (I(s, 232) != 2) {
                if (!FUN_0203a1fc(s + 400)) {
                    FUN_02039534(s + 384, s + 400);
                    I(s, 576) = 25;
                    FUN_0203955c(s + 400);
                } else {
                    I(s, 576) = 0;
                    FUN_020946a0(s);
                    U(s, 248) &= ~32u;
                    if (has_flag(s, 0x40000000) && H(s, 334) == 0) FUN_0206f93c(s, 0, 1);
                    U(s, 248) &= ~0x40000000u;
                }
            }
            break;
        case 16:
            if (!FUN_02038774(s)) {
                U(s, 248) &= ~1u;
                U(s, 248) &= ~256u;
                FUN_02034680(s + 156, s + 180);
                FUN_020946a0(s);
            }
            break;
        case 20:
            if (has_flag(s, 1) && !FUN_02038774(s)) {
                FUN_020426b8(P(s, 140));
                FUN_0204f458(FUN_0204f3b8(), P(s, 432));
                P(s, 432) = 0;
                FUN_0203a9a4(s, 1);
                for (i = 0; i < 3; i++) {
                    if (P(s + 4 * i, 440)) {
                        FUN_020472bc(P(s + 4 * i, 440));
                        P(s + 4 * i, 440) = 0;
                    }
                }
                FUN_0203b8a0(s, 122, s + 156, 0);
                FUN_020c193c(4, 1, 0, 0, -1);
                I(s, 576) = 21;
            }
            break;
        case 21:
            if (has_flag(s, 1) && is_mstate(P(s, 140), 1)) {
                if (P(s, 452)) {
                    FUN_0204b3ac(P(s, 452), 0, 0, 0);
                    FUN_020472bc(P(s, 452));
                    P(s, 452) = 0;
                }
                FUN_0204a670(FUN_0204a580(), P(s, 252));
                FUN_02038154(s);
                FUN_0203819c(s);
                if (DAT_02108d08) {
                    FUN_0203eee4(DAT_02108d08, B(s, 152));
                    FUN_020345f0(&v21, s + 156);
                    P(s, 464) = FUN_020b0990(P(s, 252), B(s, 152), C(s, 330), 1, &v21, H(s, 192));
                }
                if (P(s, 224)) U(P(s, 224), 228) |= 1;
                I(s, 576) = 27;
            }
            break;
        case 28:
            if (has_flag(s, 1) && DAT_02108d08 && FUN_0203ef54(DAT_02108d08, B(s, 152)) == 1 && !FUN_020387ac(s)) {
                FUN_02038700(s, I(s, 212), 4);
                FUN_0203a6f8(s, s + 384);
                FUN_0203a850(s, s + 416, 1);
                U(s, 248) |= 64;
                FUN_0204267c(P(s, 140));
                U(P(s, 140), 24) &= ~1u;
                FUN_0203b8a0(s, 121, s + 156, 0);
                FUN_020c193c(4, 1, 0, 0, -1);
                for (i = 0; i < 3; i++) {
                    if (P(s + 4 * i, 440)) {
                        FUN_020472bc(P(s + 4 * i, 440));
                        P(s + 4 * i, 440) = 0;
                    }
                }
                I(s, 576) = 22;
            }
            break;
        case 22:
            if (!is_mstate(P(s, 140), 3)) {
                U(s, 248) &= ~2u;
                U(s, 248) &= ~1u;
                U(s, 248) &= ~32u;
                U(s, 248) &= ~64u;
                U(s, 248) &= ~256u;
                U(s, 248) &= ~4u;
                for (i = 0; i < 4; i++) {
                    I(s + 4 * i, 468) = -1;
                    B(s + i, 484) = 0;
                }
                B(s, 330) = 0;
                FUN_020946a0(s);
            }
            break;
        case 4:
        case 15:
            if (!FUN_02038774(s)) {
                I(s, 576) = 0;
                I(s, 208) = 0;
            }
            break;
        case 14:
            if (!FUN_02038774(s)) I(s, 208) = 10;
            break;
        case 0:
            if (!FUN_02038774(s)) I(s, 208) = 0;
            break;
        }
    } else {
        if (I(s, 576) == 27 && P(s, 464) && FUN_020b0ed0(P(s, 464)) == 1) {
            for (i = 0; i < 3; i++) {
                if (P(s + 4 * i, 440)) {
                    FUN_020472bc(P(s + 4 * i, 440));
                    P(s + 4 * i, 440) = 0;
                }
            }
            FUN_020b0a44(P(s, 464));
            P(s, 464) = 0;
            FUN_02038320(s, 1);
            if (P(s, 140)) U(P(s, 140), 24) &= ~1u;
            I(s, 576) = 28;
        }
    }

    if (has_flag(s, 16) && !has_flag(s, 0x800000) && FUN_02085880(P(s, 252)) && P(s, 140) && I(P(s, 140), 252)) {
        vpost.x = U(s, 180);
        vpost.y = (int)(((long long)I(s, 220) * 7373 + 2048) >> 12);
        vpost.z = U(s, 188);
        FUN_020a4304(&vpost);
    }
    if (P(s, 432)) FUN_0204faf8(P(s, 432));
    if (B(s, 514) < 255) B(s, 514)++;
    FUN_02035408(&pos, U(s, 156), U(s, 160), U(s, 164));
    p = FUN_02034b8c(&pos, 256);
    if (p && !has_pflag(p, 0x10000)) FUN_02034680(s + 296, s + 156);
    FUN_02038e40(s);
    if (I(s, 520)) {
        if (I(s, 524) && I(s, 576) != 12) FUN_0203c17c(s);
        U(s, 532)++;
        if (I(s, 532) > 150) FUN_0203c17c(s);
    }
}
