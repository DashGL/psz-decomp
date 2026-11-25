//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
struct Actor {
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
    virtual void v67();
    virtual void v68();
    virtual int v69(void *);
};
extern "C" {
extern void *DAT_02108c58;
extern Vec DAT_020fc958;
extern int FUN_0204243c(void *, int), FUN_0204260c(void *, int, void *, void *), FUN_020424b4(void *, int);
extern void FUN_02035408(Vec *, int, int, int), FUN_02031254(void *, Vec *, unsigned short *), FUN_02034680(void *, const void *);
extern void *FUN_02034b8c(Vec *, unsigned int);
void FUN_02095120(char *self) {
    int matrix[12], rotation[9];
    Vec sample;
    unsigned int item[4];
    Vec current, previous;
    unsigned short tag;
    void *global;
    char *child = *(char **)(self + 140);
    if (!child) return;
    if (FUN_0204243c(child, 0)) {
        if (FUN_0204260c(*(void **)(self + 140), 0, matrix, rotation) == 1) {
            FUN_02035408(&sample, matrix[9], *(int *)(self + 160), matrix[11]);
            if (FUN_02034b8c(&sample, 256)) return;
            if (*(int *)(self + 576) == 12 && ((Actor *)self)->v69(item)) {
                if (((unsigned char *)item)[1] == 4 && (item[1] & 15) == 2 && FUN_020424b4(*(void **)(self + 140), 0) < 0x18000) {
                    *(unsigned int *)(*(char **)(self + 140) + 24) &= ~4U;
                    return;
                }
            }
            if (*(int *)(self + 576) == 12 && ((Actor *)self)->v69(item)) {
                if (((unsigned char *)item)[1] == 7 && (item[1] & 15) == 1) {
                    *(unsigned int *)(*(char **)(self + 140) + 24) &= ~4U;
                    return;
                }
            }
            if (*(int *)(self + 576) == 15 && FUN_020424b4(*(void **)(self + 140), 0) < 8192) {
                *(unsigned int *)(*(char **)(self + 140) + 24) &= ~4U;
                return;
            }
            *(unsigned int *)(*(char **)(self + 140) + 24) |= 4;
        } else {
            *(unsigned int *)(*(char **)(self + 140) + 24) &= ~4U;
        }
    } else {
        *(unsigned int *)(*(char **)(self + 140) + 24) &= ~4U;
        FUN_02035408(&current, *(int *)(self + 156), *(int *)(self + 160), *(int *)(self + 164));
        if (FUN_02034b8c(&current, 256)) return;
        FUN_02035408(&previous, *(int *)(self + 168), *(int *)(self + 172), *(int *)(self + 176));
        if (!FUN_02034b8c(&current, 256)) {
            enum { E0 = 0, E1 = 1 }; if (((*(unsigned int *)(self + 248) & 8) ? E1 : E0) == 0) {
                global = DAT_02108c58;
                Vec fallback = DAT_020fc958;
                tag = 0;
                if (!global) return;
                FUN_02031254(global, &fallback, &tag);
                *(int *)(self + 156) = fallback.x;
                *(int *)(self + 160) = fallback.y;
                *(int *)(self + 164) = fallback.z;
            } else {
                FUN_02034680(self + 156, self + 296);
            }
        } else {
            FUN_02034680(self + 156, self + 168);
        }
    }
}
}
