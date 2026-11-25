//cpp
// flags: -O4,s
struct V { unsigned int w[3]; };
struct A { unsigned int w[12]; };
struct M { unsigned int w[9]; };

struct Obj {
    virtual void v00(void);
    virtual void v01(void);
    virtual void v02(void);
    virtual void v03(void);
    virtual void v04(void);
    virtual void v05(void);
    virtual void v06(unsigned int);
    virtual void v07(unsigned int);
    virtual void v08(void);
    virtual void v09(unsigned int, unsigned int, unsigned int);
    virtual V v10(void);
    virtual void v11(unsigned int);
    virtual void v12(void);
    virtual void v13(void);
    virtual void v14(void);
    virtual void v15(void);
};

struct Self {
    virtual void v00(void); virtual void v01(void); virtual void v02(void); virtual void v03(void);
    virtual void v04(void); virtual void v05(void); virtual void v06(void); virtual void v07(void);
    virtual void v08(void); virtual void v09(void); virtual void v10(void); virtual void v11(void);
    virtual void v12(void); virtual void v13(void); virtual void v14(void); virtual void v15(void);
    virtual void v16(void); virtual void v17(void); virtual void v18(void); virtual void v19(void);
    virtual void v20(void); virtual void v21(void); virtual void v22(void); virtual void v23(void);
    virtual void v24(void); virtual void v25(void); virtual void v26(void); virtual void v27(void);
    virtual void v28(void); virtual void v29(void); virtual void v30(void); virtual void v31(void);
    virtual void v32(void); virtual void v33(void); virtual void v34(void); virtual void v35(void);
    virtual void v36(void); virtual void v37(void); virtual void v38(void); virtual void v39(void);
    virtual void v40(void); virtual void v41(void); virtual void v42(void); virtual void v43(void);
    virtual void v44(void); virtual void v45(void); virtual void v46(void); virtual void v47(void);
    virtual void v48(void);
    virtual int v49(void);
};

extern "C" {
extern int FUN_0204243c(void *, int), FUN_0204260c(void *, int, A *, M *), FUN_0203d2a4(void *), FUN_020bbfa8(unsigned int), FUN_0203d364(void *, V *), FUN_0203ab7c(void *);
extern char *FUN_020384a4(void *, unsigned int);
extern void FUN_02034680(V *, const V &), FUN_02070810(void *, const V &);
extern V FUN_02035408(unsigned int, unsigned int, unsigned int);
extern char *DAT_02108c84;

#define W(n) (*(unsigned int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))

void FUN_0203cc8c(Self *self) {
    char *s = (char *)self;
    char *manager = DAT_02108c84;
    Obj *obj;
    char *part;
    unsigned int state;

    if (!manager) return;
    obj = *(Obj **)(manager + 64 + 4 * (*(unsigned int *)(manager + 100)));
    if (!obj) return;
    if (W(0x250) & 1) *(unsigned int *)((char *)obj + 120) |= 2;
    else *(unsigned int *)((char *)obj + 120) &= ~2u;

    if (W(140)) {
        if (FUN_0204243c((void *)W(140), 0)) {
            A a;
            M m;
            V converted;
            FUN_02034680(&converted, obj->v10());
            if (FUN_0204260c((void *)W(140), 0, &a, &m) == 1) {
                part = FUN_020384a4(s, W(208));
                state = W(576);
                if (state == 12 && part) {
                    if (!*(unsigned int *)(part + 32) && !*(unsigned int *)(part + 40)) {
                        obj->v09(a.w[9], converted.w[1], a.w[11]);
                        obj->v11(H(194));
                    } else {
                        obj->v09(W(156), converted.w[1], W(164));
                        obj->v11(H(194));
                    }
                } else if (state - 9 <= 2) {
                    obj->v09(a.w[9], converted.w[1], a.w[11]);
                    obj->v11(H(192));
                } else {
                    obj->v09(a.w[9], converted.w[1], a.w[11]);
                    obj->v11(H(194));
                }
            }
            if (FUN_0203d2a4(s) && FUN_020bbfa8(512) && !FUN_020bbfa8(1024) && !W(0xe28)) {
                V loc;
                if (FUN_0203d364(s, &loc) == 1) {
                    FUN_02070810(s, FUN_02035408(loc.w[0], loc.w[1], loc.w[2]));
                }
                obj->v06((unsigned short)(H(192) + 32768));
            }
        } else if (FUN_0203d2a4(s) && FUN_020bbfa8(512) && !FUN_020bbfa8(1024) && !W(0xe28)) {
            V loc;
            if (FUN_0203d364(s, &loc) == 1) {
                FUN_02070810(s, FUN_02035408(loc.w[0], loc.w[1], loc.w[2]));
            }
            obj->v09(W(180), W(184), W(188));
            obj->v06((unsigned short)(H(192) + 32768));
        } else if (self->v49()) {
            obj->v09(W(180), W(184), W(188));
            obj->v11(H(194));
            obj->v07((unsigned short)(H(318) + 32768));
        } else {
            if (W(576) == 28 || W(576) == 22) {
                obj->v09(W(156), W(160), W(164));
            } else {
                obj->v09(W(180), W(184), W(188));
            }
            obj->v11(H(194));
            if (W(576) == 19) obj->v06((unsigned short)(H(192) + 32768));
        }
        if (FUN_0203ab7c(s) == 1) {
            obj->v14();
        } else {
            obj->v15();
        }
    } else if (W(576) == 27) {
        part = (char *)W(464);
        if (part && *(unsigned int *)(part + 112) == 3) {
            V loc = *(V *)(part + 76);
            obj->v09(loc.w[0], loc.w[1], loc.w[2]);
        }
    }
}
}
