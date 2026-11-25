// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12a, exact bytes and relocation targets.
// FUN_02098bc8: full 0x12a bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,p
struct Sub98bc8_02098bc8 {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void v74();
    virtual void v78();
    virtual void v7c();
    virtual void v80();
    virtual void v84();
    virtual void v88();
    virtual void v8c();
    virtual void v90();
    virtual void v94();
    virtual void v98();
    virtual int v9c();
};
struct Obj98bc8_02098bc8 {
    int f0;
    int f4;
};
extern "C" {
extern Sub98bc8_02098bc8 *FUN_0208555c(int);
extern int FUN_0203ae60(Sub98bc8_02098bc8 *);
extern int FUN_020390f4(Sub98bc8_02098bc8 *);
extern void FUN_02094594(Sub98bc8_02098bc8 *);
extern void *FUN_02098558(Obj98bc8_02098bc8 *);
extern int FUN_02095a8c(void *);
extern int FUN_02038774(void *);
extern int FUN_0203b3e4(Sub98bc8_02098bc8 *);
extern int FUN_0203b3f8(Sub98bc8_02098bc8 *);
extern void FUN_020945e0(Sub98bc8_02098bc8 *, int);

void FUN_02098bc8(Obj98bc8_02098bc8 *self) {
    Sub98bc8_02098bc8 *sub = FUN_0208555c(self->f0);
    if (sub != 0) {
        if (FUN_0203ae60(sub) != 0) {
            self->f4 = 0;
            return;
        }
        switch (self->f4) {
        case 0:
            break;
        case 1:
            if (sub->v9c() != 0 && FUN_020390f4(sub) == 0) {
                FUN_02094594(sub);
            }
            break;
        case 2: {
            void *t = FUN_02098558(self);
            if (t != 0) {
                if (FUN_02095a8c(t) != 0) {
                    self->f4 = 3;
                } else if (FUN_02038774(t) == 0) {
                    self->f4 = 0;
                }
            }
            break;
        }
        case 3: {
            void *t = FUN_02098558(self);
            if (t != 0 && FUN_02095a8c(t) == 0) {
                self->f4 = 4;
            }
            break;
        }
        case 4:
            if (FUN_02038774(sub) == 0) {
                self->f4 = 0;
            }
            break;
        case 5:
            if (*(int *)((char *)sub + 0x240) != 0x12) {
                self->f4 = 0;
            }
            break;
        case 6:
            if (FUN_0203b3e4(sub) == 0) {
                self->f4 = 0;
            }
            break;
        case 7:
            if (FUN_0203b3f8(sub) == 0) {
                self->f4 = 0;
            }
            break;
        case 8:
            if (*(int *)((char *)sub + 0x240) != 8) {
                self->f4 = 0;
            }
            break;
        case 9:
            if (*(int *)((char *)sub + 0x240) != 1) {
                self->f4 = 0;
            }
            break;
        case 10:
        case 11:
            if (sub->v9c() != 0 && FUN_020390f4(sub) == 0) {
                FUN_020945e0(sub, 2);
            }
            break;
        }
    }
}
}
