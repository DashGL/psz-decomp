// flags: -O4,s
//cpp
struct S_3d8c4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48();
    virtual int v49();
};

extern "C" {
char *FUN_020384a4(void *, unsigned int);
void FUN_02039038(void *, unsigned int, void *);
void FUN_020ac408(void);
void FUN_0203d8c4(char *s);
}

void FUN_0203d8c4(char *s) {
    int category;
    unsigned int i;
    char *part;
    if (s) {
        category = *(unsigned char *)(s + 385);
        part = FUN_020384a4(s, *(unsigned int *)(s + 208));
        s[513] = 0;
        if (part) {
            unsigned int in_range = (category >= 8 && category <= 13);
            if (!in_range || category == 10) {
                for (i = 0; i < 8; i++) {
                    if (*(unsigned char *)(part + 8 + i) != 255) {
                        FUN_02039038(s, i, (void *)FUN_020ac408);
                    }
                }
            }
        }
        if (!((S_3d8c4 *)s)->v49()) {
            *(unsigned short *)(s + 192) = *(unsigned short *)(s + 194);
        }
    }
}
