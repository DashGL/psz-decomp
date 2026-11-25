//cpp
// flags: -O4,s
typedef struct { unsigned char b[4]; } Key;
struct Actor {
    virtual int v0(void *);
    virtual int v1(void *);
    virtual int v2(void *);
    virtual int v3(void *);
    virtual int v4(void *);
    virtual int v5(void *);
    virtual int v6(void *);
    virtual int v7(void *);
    virtual int v8(void *);
    virtual int v9(void *);
    virtual int v10(void *);
    virtual int v11(void *);
    virtual int v12(void *);
    virtual int v13(void *);
    virtual int v14(void *);
    virtual int v15(void *);
    virtual int v16(void *);
    virtual int v17(void *);
    virtual int v18(void *);
    virtual int v19(void *);
    virtual int v20(void *);
    virtual int v21(void *);
    virtual int v22(void *);
    virtual int v23(void *);
    virtual int v24(void *);
    virtual int v25(void *);
    virtual int v26(void *);
    virtual int v27(void *);
    virtual int v28(void *);
    virtual int v29(void *);
    virtual int v30(void *);
    virtual int v31(void *);
    virtual int v32(void *);
    virtual int v33(void *);
    virtual int v34(void *);
    virtual int v35(void *);
    virtual int v36(void *);
    virtual int v37(void *);
    virtual int v38(void *);
    virtual int v39(void *);
    virtual int v40(void *);
    virtual int v41(void *);
    virtual int v42(void *);
    virtual int v43(void *);
    virtual int v44(void *);
};
extern "C" {
extern int FUN_0203ae60(void *), FUN_0203a820(void *, int), FUN_0203a1a8(void *, int);
extern void FUN_0203b3b4(void *), FUN_02070110(void *, void *, int);
extern void FUN_02090078(void *, int, int, int), FUN_020900e8(void *, int, int, int), FUN_02090158(void *, int, int, int), FUN_02090238(void *, int, int, int), FUN_020902a8(void *, int, int, int), FUN_02090318(void *, int, int, int), FUN_02090388(void *, int, int, int), FUN_020903f8(void *, int, int, int), FUN_020901c8(void *, int, int, int), FUN_02090538(void *, int, int, int), FUN_02090470(void *, int, int, int), FUN_02090634(void *, int, int, int), FUN_020906f4(void *, int, int, int), FUN_02090694(void *, int, int, int), FUN_020905d4(void *, int, int, int);
void FUN_02070174(char *self, unsigned char *item, int mode) {
    Key a, b, c, d, e;
    if (FUN_0203ae60(self)) return;
    a = *(Key *)item;
    if (FUN_0203a820(&a, 3)) {
        b = *(Key *)item;
        if (FUN_0203a1a8(&b, 0)) {
            switch (item[2]) {
            case 0: FUN_02090078(self, 0, 0, 0); return;
            case 1: FUN_020900e8(self, 0, 0, 0); return;
            case 2: FUN_02090158(self, 0, 0, 0); return;
            case 3: FUN_02090238(self, 0, 0, 0); return;
            case 4: FUN_020902a8(self, 0, 0, 0); return;
            case 5: FUN_02090318(self, 0, 0, 0); return;
            case 6: FUN_02090388(self, 0, 0, 0); return;
            case 7: FUN_020903f8(self, 0, 0, 0); return;
            case 8: FUN_020901c8(self, 0, 0, 0); return;
            case 9: FUN_02090538(self, 0, 0, 0); return;
            case 11: FUN_02090470(self, 0, 0, 0); return;
            }
        } else {
            c = *(Key *)item;
            if (FUN_0203a1a8(&c, 2)) {
                switch (item[2]) {
                case 0: FUN_02090634(self, 0, 0, 0); return;
                case 1: FUN_020906f4(self, 0, 0, 0); return;
                case 2: FUN_02090694(self, 0, 0, 0); return;
                case 3: FUN_020905d4(self, 0, 0, 0); return;
                }
            } else {
                d = *(Key *)item;
                if (FUN_0203a1a8(&d, 1)) {
                    ((Actor *)self)->v43(item);
                    FUN_0203b3b4(self);
                    return;
                }
                e = *(Key *)item;
                if (FUN_0203a1a8(&e, 5)) {
                    ((Actor *)self)->v44(item);
                    FUN_0203b3b4(self);
                    return;
                }
            }
        }
    }
    FUN_02070110(self, item, mode);
}
}
