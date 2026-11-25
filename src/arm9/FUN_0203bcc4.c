//cpp
// flags: -O4,s
typedef unsigned int u32;
struct ID { unsigned char b[4]; };
struct Value { unsigned char b[16]; };

struct Sub {
    virtual void v0(); virtual void v1();
    virtual void v2(Value *);
};

struct Self {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
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
extern int FUN_0203a820(ID *, int), FUN_0203a1a8(ID *, int), FUN_02038774(void *);
extern int FUN_02078198(int), FUN_02000ec4(int), FUN_0203b694(void *), FUN_020700d4(void *, int);
extern void *FUN_020352a4(void *, int);
extern char *FUN_020352c0(void *);
extern u32 FUN_0203a1bc(int *);
extern void FUN_020bc638(u32 *, u32 *);
extern void *data_02108cf4;
extern short data_020ee83c[];
extern short data_020ed83c[];
int FUN_0203bcc4(char *self, short *cost, int *target_id);
}

#define ROUNDMUL(a,b) ((int)(((long long)(a) * (long long)(b) + 2048) >> 12))

int FUN_0203bcc4(char *self, short *cost, int *target_id)
{
    Value value;
    int delta[2];
    ID first, second;
    u32 squared, reciprocal;
    int valid, active, selected, amount, enough;
    char *target;
    int threshold, heading, sine, cosine, dot;

    ((Sub *)(self + 32))->v2(&value);
    valid = 0;
    first = *(ID *)&value;
    if (FUN_0203a820(&first, 0)) {
        second = *(ID *)&value;
        if (FUN_0203a1a8(&second, 6))
            valid = 1;
    }
    active = (((Self *)self)->v49() && !FUN_02038774(self));
    if (valid && active) {
        selected = FUN_02078198(*target_id);
        amount = FUN_02000ec4(*cost) / 10;
        if (amount <= 0)
            amount = 1;
        enough = (*(unsigned short *)(self + 336) >= amount);
        if (selected && enough) {
            target = FUN_020352c0(FUN_020352a4(data_02108cf4, *target_id));
            if (target) {
                char *pos = target + 56;
                if (pos) {
                    threshold = data_020ee83c[1];
                    heading = ((int)*(unsigned short *)(self + 192) >> 4) * 2;
                    {
                        int dx = *(int *)pos - *(int *)(self + 156);
                        int dz = *(int *)(pos + 8) - *(int *)(self + 164);
                        delta[0] = dx;
                        delta[1] = dz;
                    }
                    sine = data_020ed83c[heading];
                    cosine = data_020ed83c[heading + 1];
                    FUN_0203a1bc(delta);
                    if (delta[0] || delta[1]) {
                        squared = FUN_0203a1bc(delta);
                        FUN_020bc638(&reciprocal, &squared);
                        delta[0] = ROUNDMUL(delta[0], (int)reciprocal);
                        delta[1] = ROUNDMUL(delta[1], (int)reciprocal);
                    }
                    dot = ROUNDMUL(delta[0], sine) + ROUNDMUL(delta[1], cosine);
                    if (dot > threshold) {
                        if (FUN_0203b694(self))
                            FUN_020700d4(self, (short)-amount);
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
