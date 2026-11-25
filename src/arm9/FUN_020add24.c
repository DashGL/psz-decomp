// flags: -O4,p
extern void *FUN_02077930(void);
extern int FUN_02077d50(void *);
extern int FUN_02077cb0(void *, int);
extern int FUN_020b6df0(void *);
extern int FUN_0203b6c4(void *);
extern int FUN_02038774(void *);
extern int FUN_020bbfa8(int);
extern int FUN_020bbf80(int);
extern void FUN_02049468(void *, int);
extern void FUN_02049138(void *, int);
extern void FUN_02049228(void *);
extern void FUN_020492fc(void *);

typedef struct {
    unsigned short b0;
    unsigned short b1;
    unsigned short b2;
} ChargeRow;

typedef struct {
    unsigned char pad000[0x20];
    unsigned char f020[0x1d0];
    int f1f0;                     // 496 (0x1f0)
    unsigned char pad1f4[0x4c];
    int f240;                     // 576 (0x240)
    unsigned char pad244[0x14];
    unsigned char f258;           // 600 (0x258)
    unsigned char f259;           // 601 (0x259)
    unsigned char f25a;           // 602 (0x25a)
    unsigned char f25b;           // 603 (0x25b)
    unsigned char pad25c[0x14];
    ChargeRow rows[2];            // 624 (0x270)
    unsigned short f27c;          // 636 (0x27c)
    unsigned short pad27e;
    int f280;                     // 640 (0x280)
    int f284;                     // 644 (0x284)
    int f288;                     // 648 (0x288)
    unsigned char pad28c[0x8];
    void *f294;                   // 660 (0x294)
} Player;

int FUN_020add24(Player *s) {
    unsigned short completed = 0;
    unsigned short held = 0;
    int set = FUN_02077d50(FUN_02077930());
    int duration;
    int action;

    if (FUN_020b6df0(s->f020) > 0) {
        duration = (int)(0.7 * (double)s->f1f0);
    } else {
        duration = s->f1f0;
    }

    action = FUN_02077cb0(FUN_02077930(), 0);
    if (s->rows[set].b0 != 0 && s->f259 == 0 && s->f25b == 0
        && (!FUN_0203b6c4(s) || (action == 15 || action == 16))) {
        if (s->f27c == 0 || s->f27c == 1) {
            if (FUN_020bbfa8(1) && s->f240 != 12) {
                if (s->f258 < 255) {
                    s->f258++;
                }
                s->f280 = 3;
                s->f27c = 1;
                held |= 1;
                if (s->f294) {
                    FUN_02049468(s->f294, 0);
                    if (!FUN_02038774(s) && s->f258 > 10) {
                        FUN_02049138(s->f294, 1);
                    } else {
                        FUN_02049138(s->f294, 0);
                    }
                }
                if ((int)s->f258 > (int)((unsigned int)s->rows[set].b0 * (unsigned int)duration) / 100) {
                    completed |= 1;
                    s->f280 = 4;
                }
            } else if (FUN_020bbf80(1) || s->f240 == 12) {
                s->f258 = 0;
                s->f280 = 5;
                if (s->f294) {
                    FUN_02049138(s->f294, 0);
                    FUN_02049228(s->f294);
                }
            }
        }
    } else {
        if (s->f280 == 3 || s->f280 == 4) {
            s->f280 = 5;
        }
    }

    action = FUN_02077cb0(FUN_02077930(), 1);
    if (s->rows[set].b1 != 0 && s->f258 == 0 && s->f25b == 0
        && (!FUN_0203b6c4(s) || (action == 15 || action == 16))) {
        if (s->f27c == 0 || s->f27c == 2) {
            if (FUN_020bbfa8(2) && s->f240 != 12) {
                if (s->f259 < 255) {
                    s->f259++;
                }
                s->f284 = 3;
                s->f27c = 2;
                held |= 2;
                if (s->f294) {
                    FUN_02049468(s->f294, 1);
                    if (!FUN_02038774(s) && s->f259 > 10) {
                        FUN_02049138(s->f294, 1);
                    } else {
                        FUN_02049138(s->f294, 0);
                    }
                }
                if ((int)s->f259 > (int)((unsigned int)s->rows[set].b1 * (unsigned int)duration) / 100) {
                    completed |= 2;
                    s->f284 = 4;
                }
            } else if (FUN_020bbf80(2) || s->f240 == 12) {
                s->f259 = 0;
                s->f284 = 5;
                if (s->f294) {
                    FUN_02049138(s->f294, 0);
                    FUN_02049228(s->f294);
                }
            }
        }
    } else {
        if (s->f284 == 3 || s->f284 == 4) {
            s->f284 = 5;
        }
    }

    action = FUN_02077cb0(FUN_02077930(), 2);
    if (s->rows[set].b2 != 0 && s->f258 == 0 && s->f259 == 0
        && (!FUN_0203b6c4(s) || (action == 15 || action == 16))) {
        if (s->f27c == 0 || s->f27c == 2048) {
            if (FUN_020bbfa8(2048) && s->f240 != 12) {
                if (s->f25b < 255) {
                    s->f25b++;
                }
                s->f288 = 3;
                s->f27c = 2048;
                held |= 2048;
                if (s->f294) {
                    FUN_02049468(s->f294, 2);
                    if (!FUN_02038774(s) && s->f25b > 10) {
                        FUN_02049138(s->f294, 1);
                    } else {
                        FUN_02049138(s->f294, 0);
                    }
                }
                if ((int)s->f25b > (int)((unsigned int)s->rows[set].b2 * (unsigned int)duration) / 100) {
                    completed |= 2048;
                    s->f288 = 4;
                }
            } else if (FUN_020bbf80(2048) || s->f240 == 12) {
                s->f25b = 0;
                s->f288 = 5;
                if (s->f294) {
                    FUN_02049138(s->f294, 0);
                    FUN_02049228(s->f294);
                }
            }
        }
    } else {
        if (s->f288 == 3 || s->f288 == 4) {
            s->f288 = 5;
        }
    }

    if (!held) {
        s->f27c = 0;
    }
    if (completed && s->f294) {
        FUN_020492fc(s->f294);
    }
    return completed;
}
