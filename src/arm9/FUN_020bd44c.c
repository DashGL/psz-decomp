// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
//cpp
// flags: -O4,s
extern "C" {
void FUN_02036094(void *);
void FUN_020360a4(void *, int, int, int);
void FUN_020bd348(void *, void *);
void FUN_020bd3dc(void *);
void FUN_020e0ee4(void);
void FUN_020bdd60(void *, int);
}

struct VObj_020bd44c {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int v6();
};

extern "C" void FUN_020bd44c(VObj_020bd44c *param_1) {
    int i;
    *(int *)((char *)param_1 + 0xf1c) += 1;
    if (*(int *)((char *)param_1 + 0xf1c) > 0x1c2) {
        unsigned char local_18[4];
        *(int *)((char *)param_1 + 0xf1c) = 0;
        FUN_02036094(local_18);
        FUN_020360a4(local_18, 0, 0, 4);
        local_18[1] = param_1->v6();
        FUN_020bd348(param_1, local_18);
    }
    FUN_020bd3dc(param_1);
    FUN_020e0ee4();
    for (i = 0; i < 4; i++) {
        if (i != *(signed char *)((char *)param_1 + 0xf19) &&
            *(signed char *)((char *)param_1 + i + 0xc) == 1 &&
            *(int *)((char *)param_1 + 0xf30) != 0) {
            *(int *)((char *)param_1 + i * 4 + 0xf20) += 1;
            if (*(int *)((char *)param_1 + i * 4 + 0xf20) > 0x41a) {
                FUN_020bdd60(param_1, i);
            }
        }
    }
}
