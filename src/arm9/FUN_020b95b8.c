//cpp
// flags: -O4,s
extern "C" {
int FUN_020b6d34(void *, void *, int);
int FUN_020b721c(void *);
int FUN_020b7224(void *);
int FUN_020b72a0(void *);
int FUN_0207f770(void *);
}

struct ObjB95 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual int v67(void *);
};

extern "C" void FUN_020b95b8(ObjB95 *param_1, void *param_2, int unused_extra) {
    int local_14[4];
    int i;
    if (param_1->v67(local_14) == 1) {
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
