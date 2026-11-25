//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Item { unsigned int w[4]; } Item;
struct Actor {
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
extern char *DAT_02108c64;
extern unsigned int FUN_02035b60(unsigned int);
extern int FUN_0203d27c(void *), FUN_020ae168(void *), FUN_0203b41c(void *), FUN_02038774(void *), FUN_020bbfa8(unsigned int), FUN_020bbf6c(unsigned int), FUN_0203b6c4(void *), FUN_0203d2a4(void *);
extern void FUN_020add24(void *), FUN_020472bc(void *), FUN_020ad2c4(void *), FUN_020acdcc(void *), FUN_0203e038(void *), FUN_020ad660(void *), FUN_02049138(void *, int);
void FUN_020adb08(char *self) {
    Item item;
    if (((*(unsigned int *)(self + 248) & 4096) ? E1 : E0) != E0) {
        if (*(short *)(self + 3614) <= 0) {
            self[3613] = FUN_02035b60(9);
            *(short *)(self + 3614) = FUN_02035b60(15);
        } else {
            (*(short *)(self + 3614))--;
        }
    } else {
        self[3613] = 0;
        *(short *)(self + 3614) = 0;
    }
    if (FUN_0203d27c(self) == 1) {
        if (((*(unsigned int *)(self + 248) & 2048) ? E1 : E0) == E0)
            FUN_020add24(self);
        if (FUN_020ae168(self) || FUN_0203b41c(self)) {
            if (*(void **)(self + 660)) {
                FUN_020472bc(*(void **)(self + 660));
                *(void **)(self + 660) = 0;
            }
            self[508] = 0;
            return;
        }
        if (*(unsigned short *)(self + 596) >= 6 && !FUN_02038774(self)) {
            self[508] = 0;
            if (!FUN_020bbfa8(1024) && FUN_020bbfa8(512) && !FUN_0203b6c4(self)) {
                item = *(Item *)(self + 384);
                if (*(unsigned int *)(self + 604) > 10 || (((unsigned char *)&item)[1] == 10 && *(int *)(self + 576) != 3) || (((unsigned char *)&item)[1] == 6 && *(int *)(self + 576) != 3)) {
                    if (FUN_0203d2a4(self) == 1) self[508] = 2;
                    else self[508] = 1;
                }
                (*(int *)(self + 604))++;
            } else {
                *(int *)(self + 604) = 0;
            }
            *(unsigned short *)(self + 656) = 0;
            if (FUN_020bbf6c(512) || !FUN_020bbfa8(512))
                *(unsigned short *)(self + 318) = *(unsigned short *)(self + 194);
            *(unsigned int *)(self + 248) &= ~128U;
            if (((*(unsigned int *)(self + 248) & 16384) ? E1 : E0) == E0)
                *(int *)(self + 212) = *(int *)(self + 216);
            if (((*(unsigned short *)(DAT_02108c64 + 4) & 1024) ? E1 : E0) != E0) {
                if (FUN_0203b6c4(self) == 1) FUN_020ad2c4(self);
                else FUN_020acdcc(self);
            }
            FUN_0203e038(self);
        } else {
            FUN_020ad660(self);
            if (*(void **)(self + 660)) FUN_02049138(*(void **)(self + 660), 0);
        }
    } else {
        ((Actor *)self)->v50();
    }
}
}
