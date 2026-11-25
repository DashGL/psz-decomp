// flags: -O4,s
//cpp
struct S_3d0d0 {
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
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64();
    virtual void v65();
};

extern "C" {
int FUN_020b70e8(void *, void *);
int FUN_0204ea84(void *, int);
unsigned char *FUN_02086e3c(void);
unsigned char *FUN_020870c4(void *);
void FUN_0203e43c(void *);
int FUN_0203d0d0(char *s, unsigned char *desc);
}

int FUN_0203d0d0(char *s, unsigned char *desc) {
    if (FUN_020b70e8(s + 32, desc)) {
        unsigned char *record = FUN_020870c4(FUN_02086e3c()) + 44;
        unsigned int category = desc[2];
        if (FUN_0204ea84(desc, 1)) {
            unsigned int old = *(unsigned short *)(record + 12);
            if (category == 8) {
                for (int i = 0; i < 8; i++) {
                    record[34 + i] = 0;
                }
            } else {
                unsigned char *arr = record + 34;
                arr[category] = (unsigned char)(arr[category] + 1);
            }
            ((S_3d0d0 *)s)->v65();
            if (*(unsigned short *)(record + 12) != old) {
                FUN_0203e43c(s);
            }
            return 1;
        }
    }
    return 0;
}
