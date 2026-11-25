//cpp
// flags: -O4,s
struct Actor {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9c();
    virtual void va0(); virtual void va4(); virtual void va8(); virtual void vac();
    virtual void vb0(); virtual void vb4(); virtual void vb8(); virtual void vbc();
    virtual void vc0(); virtual int vc4();
};

extern "C" {
extern int FUN_020bbf6c(unsigned int), FUN_020bbf80(unsigned int), FUN_020bbfa8(unsigned int);
extern void *FUN_0204f3b8(void);
extern int FUN_0204f464(void *), FUN_020b491c(void), FUN_0208f2f8(void *);
extern void FUN_0204f4d4(void *);
extern int FUN_02033400(void *, int), FUN_020ada74(void *), FUN_020acb2c(void *, int, int);
extern void FUN_02094a10(void *, int), FUN_020acc34(void *, unsigned int), FUN_020accb8(void *, unsigned int, int);
extern int FUN_0203b6c4(void *);
extern void FUN_020947a0(void *), FUN_020947f4(void *), FUN_020946a0(void *);
extern void *UNK_02108c68;
void FUN_020ad2c4(Actor *actor);
}

#define W(n) (*(unsigned int *)(self + (n)))
#define H(n) (*(unsigned short *)(self + (n)))

void FUN_020ad2c4(Actor *actor)
{
    unsigned char *self = (unsigned char *)actor;
    if (FUN_020bbf6c(0x400)) {
        if (FUN_0204f464(FUN_0204f3b8())) {
            FUN_0204f4d4(FUN_0204f3b8());
            W(0x264) = 0;
            return;
        }
        if (FUN_020b491c()) {
            FUN_02033400(UNK_02108c68, 8);
            return;
        }
        if (FUN_0208f2f8(self) == 1) {
            W(0x264) = 0;
            return;
        }
    }
    if (FUN_020bbf6c(1) && W(0x264) > 15 && FUN_020ada74(self)) return;
    if (FUN_020bbf80(1) && W(0x264) > 15 && FUN_020acb2c(self, 0, 1)) return;
    if (FUN_020bbf6c(2) && H(0x256) > 9 && FUN_020acb2c(self, 1, 0)) return;
    if (FUN_020bbf80(2) && H(0x256) > 9 && FUN_020acb2c(self, 1, 1)) return;
    if (FUN_020bbf6c(0x800) && FUN_020acb2c(self, 2, 0)) return;
    if (FUN_020bbf80(0x800) && FUN_020acb2c(self, 2, 1)) return;

    if (FUN_020bbf6c(0x10)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 6);
            else FUN_02094a10(self, 2);
        } else {
            FUN_020acc34(self, 0x10);
        }
    } else if (FUN_020bbfa8(0x10)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 6);
            else FUN_02094a10(self, 2);
        } else {
            FUN_020accb8(self, 0x10, 2);
        }
    } else if (FUN_020bbf6c(0x20)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 5);
            else FUN_02094a10(self, 1);
        } else {
            FUN_020acc34(self, 0x20);
        }
    } else if (FUN_020bbfa8(0x20)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 5);
            else FUN_02094a10(self, 1);
        } else {
            FUN_020accb8(self, 0x20, 2);
        }
    } else if (FUN_020bbf6c(0x40)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 4);
            else FUN_02094a10(self, 0);
        } else {
            FUN_020acc34(self, 0x40);
        }
    } else if (FUN_020bbfa8(0x40)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 4);
            else FUN_02094a10(self, 0);
        } else {
            FUN_020accb8(self, 0x40, 1);
        }
    } else if (FUN_020bbf6c(0x80)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 7);
            else FUN_02094a10(self, 3);
        } else {
            FUN_020acc34(self, 0x80);
        }
    } else if (FUN_020bbfa8(0x80)) {
        if (FUN_020bbfa8(0x200)) {
            if (FUN_020bbfa8(0x100)) FUN_02094a10(self, 7);
            else FUN_02094a10(self, 3);
        } else {
            FUN_020accb8(self, 0x80, 1);
        }
    } else {
        if (H(0x27c) && !FUN_0203b6c4(self)) FUN_020947a0(self);
        else if ((self[0x181] == 6 || self[0x181] == 10) && actor->vc4() == 1) FUN_020947f4(self);
        else FUN_020946a0(self);
        if (actor->vc4() == 1) {
            unsigned short v = H(0xc0);
            H(0x13e) = v;
            H(0xc2) = v;
        }
        *(signed char *)(self + 0x1ff) = -1;
    }
    ++W(0x264);
}
