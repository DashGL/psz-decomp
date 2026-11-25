//cpp
// Passed unused input proof: notes/reference/resume2-upper-20261112/arguments-aac88-proof.json
// flags: -O4,s
// near: target=146 candidate=150; residual constant 0x158 hoisting across final two FUN_0207f770 calls
extern "C" {
int FUN_020b6d34(void *, void *, int);
int FUN_020b721c(void *);
int FUN_020b7224(void *);
int FUN_020b72a0(void *);
int FUN_0207f770(void *);
}

struct Sub20 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4(void *);
};

extern "C" void FUN_020aac88(void *param_1, void *param_2, int unused_extra) {
    int local_14[4];
    int i;
    if (((Sub20 *)((char *)param_1 + 0x20))->v4(local_14) == 1) {
        for (i = 0; i < 5; i++) {
            *(int *)((char *)param_2 + i * 4 + 0x18) = FUN_020b6d34((char *)param_1 + 0x20, local_14, i);
        }
    } else {
        for (i = 0; i < 5; i++) {
            *(int *)((char *)param_2 + i * 4 + 0x18) = 0;
        }
    }
    *(int *)((char *)param_2 + 0x4c) = FUN_020b721c((char *)param_1 + 0x20);
    *(int *)((char *)param_2 + 0x50) = FUN_020b7224((char *)param_1 + 0x20);
    *(int *)((char *)param_2 + 0x54) = FUN_020b72a0((char *)param_1 + 0x20);
    *(int *)((char *)param_2 + 0x64) = *(unsigned short *)((char *)param_1 + 0x5c);
    if (*(signed char *)((char *)param_1 + 0x46) == 2) {
        *(int *)((char *)param_2 + 0x60) |= 1;
    }
    void *p158 = (char *)param_1 + 0x158;
    *(int *)((char *)param_2 + 0x6c) = FUN_0207f770(p158);
    *(int *)((char *)param_2 + 0x70) = FUN_0207f770(p158);
}
