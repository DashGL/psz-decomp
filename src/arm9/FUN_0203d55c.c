//cpp
// flags: -O4,s
#pragma always_inline on

struct Status {
    unsigned char kind, percent;
    unsigned short pad;
    int a, b, c, d, slot, value;
    int items[2];
};

struct Self {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50();
};

extern "C" {
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb reset
extern int FUN_0207f770(void *);
extern int FUN_0207f79c(void *, int);
extern void *FUN_02077930(void);
extern void *FUN_0200d16c(void);
extern void *FUN_02129ed4(void);
extern void FUN_0207797c(void *, Status *);
extern void FUN_0212a010(void *, int, int, unsigned int, int);
extern char *FUN_020ac3b4(void *, int);
extern char *FUN_02033620(int);
extern void *FUN_0204f3b8(void);
extern int FUN_0204f464(void *);
extern int FUN_020b491c(void);
extern int FUN_02078198(int);
extern int FUN_020a4354(void);
extern void FUN_02077bcc(void *);
extern void FUN_02077bec(void *);
extern void FUN_0208d7e4(void *, int, int, int, int);
}

#define I(o) (*(int *)((char *)self + (o)))
#define H(o) (*(unsigned short *)((char *)self + (o)))
#define B(o) (*(unsigned char *)((char *)self + (o)))

static inline int has_flag(Self *self, unsigned int bit) {
    if (I(0xf8) & bit) return 1;
    return 0;
}

extern "C" void FUN_0203d55c(Self *self) {
    Status status;
    int slot, hidden;
    char *p;
    status.kind = 1;
    status.percent = 0;
    status.value = -1;
    status.a = 0;
    status.b = 0;
    status.c = 0;
    status.d = 0;
    status.slot = 0;
    FUN_0200c938(status.items, 8);
    for (int i = 0; i < 2; i++) {
        status.items[i] = 0;
    }
    slot = I(0xfc); slot = (int)(volatile int)slot;
    if (slot >= 0 && slot < 4) {
        status.kind = B(0x7a);
        status.b = H(0x14e);
        status.a = H(0x5c);
        status.d = H(0x150);
        status.c = H(0x5e);
        status.slot = slot;
        status.percent = *(short *)((char *)self + 0x154) / 100;
        status.value = FUN_0207f770((char *)self + 0x158);
        for (int i = 0; i < 2; i++) {
            status.items[i] = has_flag(self, 0x8000) ? 1 : FUN_0207f79c((char *)self + 0x158, i);
        }
        FUN_0207797c(FUN_02077930(), &status);
        if (*(int *)((char *)FUN_0200d16c() + 0xc) == 1) {
            FUN_0212a010(FUN_02129ed4(), I(0xb4), I(0xbc), H(0xc0), slot);
        }
    }
    p = FUN_020ac3b4(self, 3);
    hidden = 0;
    if ((p && *(unsigned char *)(p + 0x110)) || FUN_0204f464(FUN_0204f3b8()) || FUN_020b491c()) {
        if (I(0x280) != 3 && I(0x280) != 4 && I(0x240) != 9 && I(0x240) != 10) {
            if (*(short *)((char *)self + 0xd8c) != 0) {
                if (*(signed char *)((char *)self + 0xd8f) == 0) {
                    hidden = 1;
                } else if (!FUN_02078198(I(0xbf0))) {
                    p = FUN_02033620(I(0xbf0));
                    if (p) {
                        if (*(int *)(p + 0xc)) {
                            hidden = 1;
                        } else if (FUN_0204f464(FUN_0204f3b8())) {
                            hidden = 1;
                        }
                    } else {
                        hidden = 1;
                    }
                }
            } else {
                hidden = 1;
            }
        }
    }
    if (hidden) {
        FUN_02077bcc(FUN_02077930());
    } else {
        FUN_02077bec(FUN_02077930());
    }
    if (I(0xe28) == 1 && FUN_020a4354() == 0) {
        FUN_0208d7e4((char *)self + 0x24c, I(0xfc), 0, 0, 11);
        I(0xf8) &= ~1;
        I(0xe28) = 0;
        H(0x256) = 0;
    } else if (I(0xe28) == 0 && FUN_020a4354() == 1) {
        FUN_0208d7e4((char *)self + 0x24c, I(0xfc), 0, 0, 10);
        I(0xf8) |= 1;
        I(0xe28) = 1;
        self->v50();
        self->v38();
    }
}
