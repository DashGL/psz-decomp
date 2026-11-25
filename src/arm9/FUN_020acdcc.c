//cpp
// flags: -O4,s
struct Actor {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48();
    virtual int query();
};

extern "C" {
extern void *UNK_02108c68;
extern void *FUN_02077930(void), *FUN_0204f3b8(void), *FUN_020ac3b4(void *, int), *FUN_02052630(void *, int), *FUN_020335fc(void *);
extern unsigned char *FUN_020384a4(void *, int);
extern int FUN_02077d50(void *), FUN_020bbf6c(int), FUN_020bbf80(int), FUN_020bbfa8(int);
extern int FUN_0204f464(void *), FUN_020b491c(void), FUN_0208f2f8(void *), FUN_020ad974(void *, int), FUN_020ac93c(void *, int, int), FUN_0203b6c4(void *);
extern void FUN_0204f4d4(void *), FUN_02033400(void *, int), FUN_020acd18(void *), FUN_020acc34(void *, int);
extern void FUN_020accb8(void *, int, int), FUN_020accf8(void *), FUN_020947a0(void *), FUN_020947f4(void *), FUN_020946a0(void *), FUN_020aca34(void *, int, int);

#define S ((unsigned char *)s)
#define W(o) (*(unsigned int *)(S + (o)))
#define H(o) (*(unsigned short *)(S + (o)))
#define B(o) (*(unsigned char *)(S + (o)))
#define SB(o) (*(signed char *)(S + (o)))

void FUN_020acdcc(Actor *s) {
    void *slot;
    void *entry;
    void *object;
    unsigned char *info;
    int flag;
    int alternate;
    int blocked;
    int idle;

    FUN_02077d50(FUN_02077930());
    slot = FUN_020ac3b4(s, 3);
    flag = (W(248) & 2048) != 0;
    alternate = 0;
    if (s->query()) {
        int is_alt = (B(385) == 8 || B(385) == 11);
        if (is_alt) {
            alternate = 1;
        }
    }
    if (flag || alternate) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    idle = 0;

    if (!flag && FUN_020bbf6c(1024)) {
        if (FUN_0204f464(FUN_0204f3b8())) {
            FUN_0204f4d4(FUN_0204f3b8());
            W(612) = 0;
            return;
        }
        if (FUN_020b491c()) {
            FUN_02033400(UNK_02108c68, 8);
            return;
        }
        if (FUN_0208f2f8(s)) {
            return;
        }
    } else if (!flag && FUN_020bbfa8(1024)) {
        if (FUN_0204f464(FUN_0204f3b8())) {
            if (W(612) > 8) {
                FUN_0204f4d4(FUN_0204f3b8());
                W(612) = 0;
                return;
            }
        } else {
            if (slot) {
                entry = FUN_02052630(slot, 0);
                if (entry) {
                    object = FUN_020335fc(*(void **)((unsigned char *)entry + 64));
                    if (object && *(int *)((unsigned char *)object + 12) == 1 && FUN_0208f2f8(s)) {
                        return;
                    }
                }
                W(612) = 6;
            } else {
                W(612) = 6;
            }
        }
    }

    if (B(658) < 15 && !s->query()) {
        unsigned short v = H(192);
        H(318) = v;
        H(194) = v;
        H(316) = H(194);
    } else if ((!blocked && FUN_020bbf6c(1) && FUN_020ad974(s, blocked)) ||
               (!blocked && FUN_020bbf80(1) && W(612) > 15 && FUN_020ac93c(s, 0, 1)) ||
               (H(598) > 9 && !blocked && FUN_020bbf6c(2) && FUN_020ac93c(s, 1, 0)) ||
               (H(598) > 9 && !FUN_020bbfa8(1024) && !blocked && FUN_020bbf80(2) && FUN_020ac93c(s, 1, 1)) ||
               (!blocked && FUN_020bbf6c(2048) && FUN_020ac93c(s, 2, 0)) ||
               (!blocked && FUN_020bbf80(2048) && !FUN_020bbfa8(1024) && FUN_020ac93c(s, 2, 1))) {
    } else if (SB(3613)) {
        FUN_020acd18(s);
    } else if (FUN_020bbf6c(16)) {
        FUN_020acc34(s, 16);
    } else if (FUN_020bbfa8(16)) {
        FUN_020accb8(s, 16, 2);
    } else if (FUN_020bbf80(16)) {
        FUN_020accf8(s);
    } else if (FUN_020bbf6c(32)) {
        FUN_020acc34(s, 32);
    } else if (FUN_020bbfa8(32)) {
        FUN_020accb8(s, 32, 2);
    } else if (FUN_020bbf80(32)) {
        FUN_020accf8(s);
    } else if (FUN_020bbf6c(64)) {
        FUN_020acc34(s, 64);
    } else if (FUN_020bbfa8(64)) {
        FUN_020accb8(s, 64, 1);
    } else if (FUN_020bbf80(64)) {
        FUN_020accf8(s);
    } else if (FUN_020bbf6c(128)) {
        FUN_020acc34(s, 128);
    } else if (FUN_020bbfa8(128)) {
        FUN_020accb8(s, 128, 1);
    } else if (FUN_020bbf80(128)) {
        FUN_020accf8(s);
    } else {
        if (H(636) && !FUN_0203b6c4(s)) {
            FUN_020947a0(s);
        } else if ((B(385) == 6 || B(385) == 10) && s->query() == 1) {
            FUN_020947f4(s);
        } else {
            FUN_020946a0(s);
        }
        {
            unsigned short v = H(192);
            H(318) = v;
            H(194) = v;
            H(316) = H(194);
        }
        idle = 1;
    }

    if (alternate && (info = FUN_020384a4(s, 14)) != 0) {
        if (FUN_020bbf6c(1) && FUN_0204f464(FUN_0204f3b8())) {
            FUN_0204f4d4(FUN_0204f3b8());
            W(592) |= 2;
            W(612) = 0;
        } else if ((info[0] < B(658) || idle == 1) && FUN_020bbf6c(1)) {
            FUN_020aca34(s, 0, 0);
            B(658) = 0;
        } else if (FUN_020bbf80(1)) {
            FUN_020aca34(s, 0, 1);
        } else if ((info[0] < B(658) || idle == 1) && H(598) > 9 && FUN_020bbf6c(2)) {
            FUN_020aca34(s, 1, 0);
            B(658) = 0;
        } else if (H(598) > 9 && FUN_020bbf80(2)) {
            FUN_020aca34(s, 1, 1);
        } else if ((info[0] < B(658) || idle == 1) && FUN_020bbf6c(2048)) {
            FUN_020aca34(s, 2, 0);
            B(658) = 0;
        } else if (FUN_020bbf80(2048)) {
            FUN_020aca34(s, 2, 1);
        }
    }

    if (B(658) < 255) {
        B(658)++;
    }
    W(612)++;
}
}
