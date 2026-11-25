//cpp
// flags: -O4,s
#pragma always_inline on
#pragma block_assign on

struct V { unsigned int w[3]; };
struct A { unsigned int w[12]; };
struct M { unsigned int w[9]; };

struct Self {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual int v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual int v52();

    inline int is_mode(int m) {
        if (v16() == m) return 1;
        return 0;
    }
    inline int has_flag_bit(int bit) {
        if (*(unsigned int *)((char *)this + 0xf8) & ((unsigned int)(volatile unsigned int)1 << bit)) return 1;
        return 0;
    }
    inline void clear_flag_bit(int bit) {
        *(unsigned int *)((char *)this + 0xf8) &= ~(1u << bit);
    }
    inline void set_flag_bit(int bit) {
        *(unsigned int *)((char *)this + 0xf8) |= (1u << bit);
    }
};

extern "C" {
extern const int DAT_020ed154[];
extern unsigned char DAT_0211a51c[];
extern void FUN_0203bc80(void);
extern const unsigned int DAT_020ed16c[];
extern const unsigned short DAT_020ed148[];

extern void FUN_0207f690(void *);
extern int FUN_0207f79c(void *, int);
extern int FUN_02084bf8(void *);
extern void FUN_020bce3c(void *);
extern int FUN_02085880(unsigned int);
extern void FUN_0203b92c(void *);
extern void *FUN_0203b8ec(void *, unsigned int, int);
extern void FUN_0204b3ac(void *, void (*)(void), void *, int);
extern int FUN_0203eb14(unsigned int);
extern int FUN_0204260c(void *, int, A *, M *);
extern void FUN_02035408(V *, unsigned int, unsigned int, unsigned int);
extern void FUN_020424fc(void *, int, unsigned int);
extern void FUN_0203ad60(void *, unsigned int);
}

#define W(n) (*(unsigned int *)((char *)s + (n)))
#define I(n) (*(int *)((char *)s + (n)))
#define B(n) (*(unsigned char *)((char *)s + (n)))
#define P(n) (*(char **)((char *)s + (n)))

static inline int has_mflag(char *m) {
    if (*(unsigned int *)(m + 0x18) & 1) return 1;
    return 0;
}

extern "C" void FUN_0203a258(Self *s) {
    A a;
    M m;
    V p, q;
    signed char request[8];
    int current, prior, i, first, second, oldfirst, oldsecond;

    if (s->is_mode(1) || s->is_mode(3)) {
        FUN_0207f690((char *)s + 0x158);
    }
    current = s->v52();
    prior = -1;
    for (i = 0; i < 6; i++) {
        if (s->has_flag_bit(((const int *volatile)DAT_020ed154)[i])) {
            prior = i;
            break;
        }
    }
    first = FUN_0207f79c((char *)s + 0x158, 0);
    second = FUN_0207f79c((char *)s + 0x158, 1);
    oldfirst = *(signed char *)((char *)s + 0x17c);
    oldsecond = *(signed char *)((char *)s + 0x17d);
    if (s->is_mode(1) && FUN_02084bf8(DAT_0211a51c) &&
        (current != prior || first != oldfirst || second != oldsecond)) {
        request[0] = 1;
        request[1] = 0;
        request[2] = 0;
        request[3] = 0;
        request[2] = 2;
        request[3] = 27;
        request[0] = 2;
        request[4] = -1;
        for (i = 0; i < 2; i++) {
            request[5 + i] = 0;
        }
        request[7] = 0;
        request[4] = (signed char)current;
        request[5] = (signed char)first;
        request[6] = (signed char)second;
        FUN_020bce3c(request);
    }
    if (FUN_02085880(W(0xfc))) {
        if (P(0x8c) && has_mflag(P(0x8c))) {
            int was1 = (prior == 1) ? 1 : 0;
            int is1 = (current == 1) ? 1 : 0;
            if ((!was1 && is1) || (was1 && !is1) || (is1 && !P(0x1c4))) {
                if (is1) {
                    FUN_0203b92c(s);
                    P(0x1c4) = (char *)FUN_0203b8ec(s, 63, 0);
                    if (P(0x1c4)) {
                        *(unsigned int *)(P(0x1c4) + 0x48) = 0x00bb8000;
                        FUN_0204b3ac(P(0x1c4), FUN_0203bc80, s, 0);
                    }
                } else {
                    FUN_0203b92c(s);
                }
            } else if (current != -1 && current != 1 && FUN_0203eb14(B(0x98))) {
                FUN_0203b92c(s);
                { unsigned int id = *(const volatile unsigned int *)&DAT_020ed16c[current]; P(0x1c4) = (char *)FUN_0203b8ec(s, id, 0); }
                if (P(0x1c4)) {
                    FUN_0204b3ac(P(0x1c4), FUN_0203bc80, s, 0);
                }
            }
            if (FUN_0204260c(P(0x8c), 2, &a, &m)) {
                if (P(0x1c4)) {
                    FUN_02035408(&p, a.w[9], a.w[10], a.w[11]);
                    *(V *)(P(0x1c4) + 0x5c) = p;
                }
                if (P(0x1c8)) {
                    FUN_02035408(&q, a.w[9], a.w[10], a.w[11]);
                    *(V *)(P(0x1c8) + 0x5c) = q;
                }
            }
        }
        if (current == 1) {
            W(0xd4) = 0;
        } else if (current == 5) {
            I(0xd4) = I(0xd8) / 2;
        } else {
            W(0xd4) = W(0xd8);
        }
        if (P(0x8c)) {
            FUN_020424fc(P(0x8c), 0, W(0xd4));
        }
        if (current == 2) {
            s->v50();
        }
        {
            unsigned short angle = *(unsigned short *)((char *)s + 0x14c);
            if (current != -1) {
                angle = DAT_020ed148[current];
            }
            FUN_0203ad60(s, angle);
        }
    }
    if (prior != -1) {
        int bit = *(const volatile int *)&DAT_020ed154[prior];
        unsigned int f = *(volatile unsigned int *)((char *)s + 0xf8);
        W(0xf8) = ~(1u << bit) & f;
    }
    if (current != -1) {
        int bit = *(const volatile int *)&DAT_020ed154[current];
        unsigned int f = *(volatile unsigned int *)((char *)s + 0xf8);
        W(0xf8) = f | (1u << bit);
    }
    B(0x17c) = (unsigned char)first;
    B(0x17d) = (unsigned char)second;
}
