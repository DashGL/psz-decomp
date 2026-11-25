//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0203a820(void *, int);
extern int FUN_02045bb4(int);
extern int FUN_0206d36c(const int *, int *);
extern void FUN_020847c8(int, void *);
extern void FUN_02032dfc(void *, void *);
extern void FUN_0204f458(void *, void *);
extern void FUN_0208087c(int, void *, unsigned int);
extern void FUN_0204fbec(void *, int);
extern void FUN_02039534(void *, void *);
extern void *FUN_0204f3b8(void);
extern void *FUN_0204f400(void *, int, void *);
#pragma thumb off
extern void FUN_0201d120(void *, unsigned int, unsigned int);
#pragma thumb on
extern void *DAT_02108c64;
}

struct Tag4 {
    unsigned char b[4];
};

struct VBase3a6f8 {
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

#define APPLY_RES(m, arg) do { \
    unsigned short _a = (arg); \
    void *_r = *(void **)((m) + 28); \
    if (_r) FUN_0201d120(_r, 0, _a); \
} while (0)

extern "C" void FUN_0203a6f8(char *self, struct Tag4 *record) {
    struct Tag4 tag = *record;
    int snapshot[5];
    char *p;
    char *model;

    if (FUN_0203a820(&tag, 0)) {
        if (FUN_02045bb4(*(int *)(self + 252))) {
            FUN_020847c8(*(int *)(self + 252), record);
            FUN_02032dfc(snapshot, DAT_02108c64);
            if (!FUN_0206d36c(snapshot, 0)) {
                FUN_0204f458(FUN_0204f3b8(), *(void **)(self + 432));
                *(void **)(self + 432) = FUN_0204f400(FUN_0204f3b8(), *(int *)(self + 252), record);
                FUN_0208087c(*(int *)(self + 252), record, (*(unsigned int *)(self + 388) & 15) - 1);
                p = *(char **)(self + 432);
                if (p) {
                    model = *(char **)(p + 20);
                    if (model) {
                        model = *(char **)(model + 48);
                        if (model) {
                            APPLY_RES(model, *(unsigned short *)(self + 332));
                        }
                    }
                    p = *(char **)(self + 432);
                    model = *(char **)(p + 24);
                    if (model) {
                        model = *(char **)(model + 48);
                        if (model) {
                            APPLY_RES(model, *(unsigned short *)(self + 332));
                        }
                    }
                    FUN_0204fbec(*(void **)(self + 432), 0);
                }
                ((VBase3a6f8 *)self)->v50();
                *(unsigned int *)(self + 248) &= ~32u;
            }
        } else {
            FUN_0204f458(FUN_0204f3b8(), *(void **)(self + 432));
            *(void **)(self + 432) = 0;
            FUN_02039534(self + 384, record);
        }
    }
}
