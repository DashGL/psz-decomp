//cpp
// flags: -O4,s

struct Vec { int x, y, z; };
typedef void (*Action)(void *, int);

class ReadyObj {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual int v39();
};

class ItemObj {
public:
    virtual void v0();
    virtual void v1();
    virtual int v2(void *);
};

extern "C" {
extern void FUN_0206fd10(void *);
extern void FUN_020345f0(Vec *, Vec *);
extern void FUN_020756b0(void *);
extern void FUN_0203ab7c(void *);
extern void FUN_02075ce4(void *);
extern void FUN_02034680(void *, void *);
extern void FUN_0206f090(void *, unsigned short);
extern void FUN_0206fe30(void *, Vec *, unsigned short, int);
extern void FUN_020397d4(void *);
extern int FUN_0206fdc0(void *, Vec *, unsigned short, int);
extern int FUN_02038774(void *);
extern int FUN_020424b4(void *, int);
extern int FUN_02042418(void *, int);
extern int FUN_02042460(void *, int);
extern int FUN_0204260c(void *, int, int *, int *);
void FUN_020752bc(char *self);
}

#define W(n) (*(int *)(self + (n)))
#define H(n) (*(unsigned short *)(self + (n)))
#define P(n) (*(char **)(self + (n)))

enum { E0 = 0, E1 = 1 };
#define B(cond) ((cond) ? E1 : E0)

void FUN_020752bc(char *self) {
    unsigned int item[4];
    int matrix[12];
    int rotation[9];
    Vec pos0;
    Vec pos18;
    int flag;
    Action callback;
    char *part;

    if (((ReadyObj *)self)->v39()) {
        switch ((unsigned int)W(576)) {
        case 0:
            W(248) &= ~1;
            W(248) &= ~256;
            if (!H(334)) {
                FUN_0206fd10(self);
            }
            if (B(W(248) & 0x04000000)) {
                flag = (signed char)self[323];
                FUN_020345f0(&pos0, (Vec *)(self + 156));
                if (FUN_0206fdc0(self, &pos0, H(192), flag)) {
                    W(248) &= ~0x04000000;
                    W(248) |= 0x20000000;
                }
            }
            break;
        case 3:
            if (!H(334)) {
                FUN_0206fd10(self);
            } else {
                FUN_020756b0(self);
                FUN_0203ab7c(self);
            }
            W(248) &= ~1;
            W(248) &= ~256;
            break;
        case 5:
        case 6:
            FUN_02075ce4(self);
            W(256) = W(268);
            if (B(W(248) & 16384)) {
                W(256) >>= 1;
            }
            W(248) &= ~1;
            W(248) &= ~256;
            break;
        case 12:
        case 15:
            FUN_02075ce4(self);
            if (!FUN_02038774(self)) {
                W(156) = W(180);
                W(164) = W(188);
                FUN_02034680(self + 588, self + 156);
                FUN_0206f090(self, H(600));
                W(576) = 0;
                self[602] = 0;
            }
            break;
        case 9:
            if (((ItemObj *)(self + 32))->v2(item) && ((unsigned char *)item)[1] == 16) {
                part = P(140);
                if (part && FUN_020424b4(part, 0) >= 40960) {
                    callback = *(Action *)(self + 536);
                    if (callback) {
                        callback(self, 0);
                        *(Action *)(self + 536) = 0;
                    }
                }
            }
            FUN_02075ce4(self);
            part = P(140);
            if (part && FUN_02042418(part, 0)) {
                W(156) = W(180);
                W(164) = W(188);
                FUN_02034680(self + 588, self + 156);
            }
            if (!FUN_02038774(self)) {
                FUN_0206f090(self, H(600));
                W(576) = 0;
                self[602] = 0;
            }
            break;
        case 10:
        case 11:
        case 13:
            FUN_02075ce4(self);
            part = P(140);
            if (part && FUN_02042418(part, 0)) {
                W(156) = W(180);
                W(164) = W(188);
                FUN_02034680(self + 588, self + 156);
            }
            if (!FUN_02038774(self)) {
                FUN_0206f090(self, H(600));
                W(576) = 0;
                self[602] = 0;
            }
            break;
        case 18:
            if (!FUN_02038774(self) && B(W(248) & 0x20000000)) {
                flag = (signed char)self[323];
                FUN_020345f0(&pos18, (Vec *)(self + 156));
                FUN_0206fe30(self, &pos18, H(192), flag);
                W(248) &= ~0x20000000;
            }
            break;
        }
        part = P(140);
        if (part && !B(W(248) & 1)) {
            if (FUN_02042460(part, 0)) {
                W(156) = W(180);
                W(164) = W(188);
                FUN_02034680(self + 588, self + 156);
            } else {
                part = P(140);
                if (!B(*(int *)(part + 24) & 1)) {
                    W(156) = W(180);
                    W(164) = W(188);
                    FUN_02034680(self + 588, self + 156);
                } else if (FUN_0204260c(part, 0, matrix, rotation) == 1) {
                    W(180) = matrix[9];
                    W(188) = matrix[11];
                }
            }
        }
    } else {
        FUN_02034680(self + 588, self + 156);
    }
    FUN_020397d4(self);
}
