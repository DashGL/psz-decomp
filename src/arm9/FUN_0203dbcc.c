//cpp
// flags: -O4,s
struct Obj_0203dbcc {
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
};
struct V_0203dbcc { union { struct { unsigned int x, y, z; }; unsigned int w[3]; }; };
extern "C" {
extern void *DAT_0210e234;
extern char *DAT_02108c84;
extern char DAT_020ed3bc[];
extern void FUN_020380d4(void *), FUN_0203acc0(void *), FUN_0208d638(void *, int, void *, unsigned int, unsigned int), FUN_0208d7e4(void *, int, int, int, int), FUN_0203ae04(void *), FUN_020aad48(void *), FUN_020ab5d8(void *), FUN_020946a0(void *), FUN_0203a850(void *, void *, int), FUN_0203a6f8(void *, void *), FUN_020391f8(void *, unsigned int, int), FUN_0203666c(void *), FUN_02049138(void *, int), FUN_02035408(void *, unsigned int, unsigned int, unsigned int), FUN_02034534(void *, int, int), FUN_0203bc28(void *), FUN_0203e43c(void *), FUN_02034528(void *, int, void *, int);
extern int FUN_0203b6c4(void *), FUN_02072c20(void *, int, int);
extern void *FUN_02048f5c(void *), *FUN_02046d94(void *, int, int), *FUN_02072af0(void);
void FUN_0203dbcc(char *s) {
    unsigned int first[25], second[25];
    V_0203dbcc position, scale;
    char *effect, *manager;
    FUN_020380d4(s);
    FUN_0203acc0(s);
    FUN_0208d638(s + 588, *(int *)(s + 252), s + 156, *(unsigned short *)(s + 192), 4);
    FUN_0208d7e4(s + 588, *(int *)(s + 252), 0, 0, 17);
    FUN_0203ae04(s);
    FUN_020aad48(s);
    FUN_020ab5d8(s);
    FUN_020946a0(s);
    FUN_0203a850(s, s + 416, 0);
    FUN_0203a6f8(s, s + 384);
    *(unsigned int *)(s + 264) = FUN_0203b6c4(s) ? 1024 : 696;
    *(int *)(s + 576) = 24;
    *(int *)(s + 204) = -1;
    *(int *)(s + 612) = 0;
    FUN_020391f8(s, *(unsigned int *)(s + 212), 4);
    FUN_0203666c(first);
    first[22] = *(unsigned int *)(s + 252);
    first[21] = 54;
    *(void **)(s + 660) = FUN_02048f5c(first);
    if (*(void **)(s + 660)) FUN_02049138(*(void **)(s + 660), 0);
    ((Obj_0203dbcc *)s)->v50();
    if (DAT_0210e234) {
        FUN_0203666c(second);
        FUN_02035408(&position, *(unsigned int *)(s + 156), *(unsigned int *)(s + 160) + 205, *(unsigned int *)(s + 164));
        *(V_0203dbcc *)(second + 8) = position;
        scale.x = 3686;
        scale.y = 4096;
        scale.z = 3686;
        *(V_0203dbcc *)(second + 11) = scale;
        second[21] = 5;
        second[22] = *(unsigned int *)(s + 252);
        *(void **)(s + 224) = FUN_02046d94(second, 0, 0);
        effect = *(char **)(s + 224);
        if (effect) *(unsigned int *)(effect + 228) &= ~1u;
    }
    if (FUN_0203b6c4(s)) {
        manager = DAT_02108c84;
        if (manager) FUN_02034534(manager, 0, 0);
        manager = (char *)FUN_02072af0();
        if (*(int *)(manager + 8) == 7) FUN_02072c20(FUN_02072af0(), 0, 1);
        *(volatile unsigned int *)(s + 248) &= ~4u;
        ((Obj_0203dbcc *)s)->v23();
        FUN_0203bc28(s);
        FUN_0203e43c(s);
    } else if (!*(unsigned short *)(s + 334)) {
        *(volatile unsigned int *)(s + 248) |= 0x40000000;
        manager = DAT_02108c84;
        if (manager) FUN_02034528(manager, 0, DAT_020ed3bc, 0);
    }
    *(signed char *)(s + 511) = -1;
    *(unsigned int *)(s + 592) &= ~4u;
    *(volatile unsigned int *)(s + 248) &= ~2u;
    *(unsigned int *)(s + 3616) = 0;
}
}
