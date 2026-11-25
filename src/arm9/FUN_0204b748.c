// flags: -O4,s
typedef struct { unsigned int w[3]; } V;
typedef struct { unsigned int w[9]; } M;

extern int FUN_0204dab0(unsigned int);
extern int FUN_0204bb8c(void *);
extern int FUN_0200a3a0(int, int);
extern int FUN_02042418(void *, int);
extern int FUN_02042580(void *, int);
extern void *FUN_0204225c(void *, int);
extern void FUN_02035408(V *, unsigned int, unsigned int, unsigned int);
extern void FUN_0203807c(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_0204bb08(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_0204bb2c(void *);
extern void FUN_02046be0(void *);
extern void FUN_02046bdc(void *, unsigned int);
extern void FUN_0204c11c(void *);
extern void FUN_0204b3c0(void *, int);

#define W(n) (*(unsigned int *)(s + (n)))
#define S(n) (*(int *)(s + (n)))
#define P(n) (*(char **)(s + (n)))

int FUN_0204b748(char *s) {
    int result = 0;
    if (P(48)) {
        int blocked = result;
        if (!FUN_0204dab0(W(232)) &&
            *(signed char *)(s + 252) != 11 &&
            *(signed char *)(s + 252) != 12 &&
            *(signed char *)(s + 252) != 3) {
            blocked = FUN_0204bb8c(s);
        }
        if (S(184) < S(176)) {
            if (S(184) == 0) {
                W(192) = W(168);
                if (S(192) < 0) {
                    W(192) = 31;
                }
                *(V *)(s + 196) = *(V *)(s + 80);
            }
            if (W(228) & 4) {
                W(168) = FUN_0200a3a0((int)(W(192) * W(184)), S(176));
            }
            if (W(228) & 16) {
                V v;
                int den = S(176);
                unsigned int factor = W(184);
                unsigned int x = FUN_0200a3a0(S(196), den);
                unsigned int y = FUN_0200a3a0(S(200), den);
                FUN_02035408(&v, factor * x, factor * y, factor * (unsigned int)FUN_0200a3a0(S(204), den));
                *(V *)(s + 80) = v;
            }
            S(184)++;
        }
        {
            int vis = 1;
            if (W(228) & 1) {
                vis = 0;
            }
            if (vis != 0) {
                FUN_0203807c(P(48), W(92), W(96), W(100));
                FUN_0204bb08(P(48), W(80), W(84), W(88));
                *(M *)(P(48) + 144) = *(M *)(s + 112);
                FUN_0204bb2c(s);
            }
        }
        {
            int done = 0;
            W(148) += W(76);
            if (S(68) >= 0 && S(68) < S(148)) {
                S(68) = -1;
                if (!(W(228) & 0x40000)) {
                    char *obj = P(48);
                    if (obj && W(172) <= 1) {
                        int i;
                        for (i = 0; i < 5; i++) {
                            void *part = FUN_0204225c(obj, i);
                            if (part) {
                                FUN_02046be0(part);
                                FUN_02046bdc(part, W(76));
                            }
                        }
                    }
                }
                if (S(156) >= 0 && S(160) >= 0) {
                    FUN_0204c11c(s);
                }
            }
            if (S(72) >= 0 && S(72) < S(148)) {
                done = 1;
            }
            {
                char *obj = P(48);
                if (obj && S(68) < 0) {
                    int vis = 1;
                    if (W(228) & 1) {
                        vis = 0;
                    }
                    if (vis != 0 && !blocked) {
                        *(unsigned int *)(obj + 24) |= 1;
                    } else {
                        *(unsigned int *)(obj + 24) &= ~1u;
                    }
                }
            }
            {
                int loopFlag;
                if (W(228) & 2) {
                    loopFlag = 1;
                } else {
                    loopFlag = 0;
                }
                if (loopFlag == 0 && *(void *volatile *)(s + 48) && W(172) <= 1) {
                    char *obj = P(48);
                    int count = 0;
                    int active = 0;
                    int other = 0;
                    int i;
                    for (i = 0; i < 5; i++) {
                        if (*(unsigned short *)(s + 56 + 2 * i) != 65535 && !(W(228) & (1u << (i + 6)))) {
                            if (FUN_02042418(obj, i)) {
                                active++;
                            } else if (FUN_02042580(obj, i)) {
                                other++;
                            }
                            count++;
                        }
                    }
                    if (active > 0 && other > 0) {
                        active += other;
                    }
                    if (count < 1 || active >= count) {
                        done = 1;
                    }
                }
            }
            if (done) {
                if (W(228) & 0x80000) {
                    FUN_0204b3c0(s, 5);
                    S(72) = -1;
                    W(228) &= ~0x80000u;
                    W(228) &= ~2u;
                } else if (!(W(228) & 8) && !(W(228) & 32)) {
                    result = 1;
                    W(4) = 5;
                } else {
                    if (S(188) < S(180)) {
                        if (W(228) & 8) {
                            W(168) = FUN_0200a3a0((S(180) - S(188)) * S(192), S(180));
                        }
                        if (W(228) & 32) {
                            V v;
                            int den = S(180);
                            int factor = den - S(188);
                            unsigned int x = FUN_0200a3a0(S(196), den);
                            unsigned int y = FUN_0200a3a0(S(200), den);
                            FUN_02035408(&v, factor * x, factor * y, factor * (unsigned int)FUN_0200a3a0(S(204), den));
                            *(V *)(s + 80) = v;
                        }
                        S(188)++;
                    } else {
                        result = 1;
                        W(4) = 5;
                    }
                }
            }
        }
    }
    return result;
}
