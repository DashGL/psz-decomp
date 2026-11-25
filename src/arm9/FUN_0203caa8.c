// flags: -O4,s
//cpp
struct Obj {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual int v4();
    virtual int v5();
    virtual int v6();
    virtual int v7();
    virtual int v8();
    virtual int v9();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual int v20();
    virtual int v21();
    virtual int v22();
    virtual int v23();
    virtual int v24();
    virtual int v25();
    virtual int v26();
    virtual int v27();
    virtual int v28();
    virtual int v29();
    virtual int v30();
    virtual int v31();
    virtual int v32();
    virtual int v33();
    virtual int v34();
    virtual int v35();
    virtual int v36();
    virtual int v37();
    virtual int v38();
    virtual int v39();
    virtual int v40();
    virtual int v41();
    virtual int v42();
    virtual int v43();
    virtual int v44();
    virtual int v45();
    virtual int v46();
    virtual int v47();
};
extern "C" {
extern int FUN_0203ae60(void *);
extern int FUN_020b7358(void *, int);
extern int FUN_0203b6c4(void *);
extern int FUN_0203c34c(void *, int);
extern int FUN_0203c38c(void *, int);
extern void FUN_0203d200(void *, int);
extern void FUN_02049138(void *, int);
extern void FUN_020c193c(int, int, int, int, int);

#define H(n) (*(unsigned short *)(s + (n)))
#define W(n) (*(unsigned int *)(s + (n)))
#define B(n) (*(unsigned char *)(s + (n)))

static inline int not_gt60(unsigned char v) {
    return !(v > 60);
}

void FUN_0203caa8(char *s)
{
    int a, b, x, y, equal, type;

    if (FUN_0203ae60(s)) {
        H(308) = 0;
        H(310) = 0;
    } else if (H(308) > 150) {
        equal = H(308) == H(310);
        a = 0;
        b = 0;
        type = *(signed char *)(s + 68);
        if (type == 2) a += equal ? 204 : 40;
        if (type == 1) b += equal ? 204 : 40;
        x = FUN_020b7358(s + 32, 0);
        y = FUN_020b7358(s + 32, 1);
        x += (int)(((long long)H(92) * a + 2048) >> 12);
        y += (int)(((long long)H(94) * b + 2048) >> 12);
        if (x > 0) FUN_0203c34c(s, (short)x);
        if (y > 0) FUN_0203c38c(s, (short)y);
        H(308) = 0;
        H(310) = 0;
    }
    H(308)++;
    switch (W(576)) {
    case 14: {
        unsigned char t = B(331);
        if (not_gt60(t) == 0 && t != 255 && H(334) == 0) {
            if (((Obj *)s)->v47() == 1) {
                FUN_0203d200(s, 33);
                B(331) = 0;
            } else {
                if (*(void **)(s + 660)) FUN_02049138(*(void **)(s + 660), 0);
                B(331) = 255;
            }
        }
        break;
    }
    case 0:
        H(310)++;
        break;
    }
    if (!FUN_0203b6c4(s) && B(659) >= 15) {
        if (H(334) && ((double)H(334) <= 0.1 * (double)H(92))) {
            FUN_020c193c(1, 29, 0, 0, -1);
        }
        B(659) = 0;
    }
    B(659)++;
    if (B(331) < 254) B(331)++;
}
}
