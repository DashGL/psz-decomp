//cpp
// flags: -O4,s
struct Key { unsigned char b[4]; };
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
    int state;
    int idx;
    int pad0c[2];
    void *ptrs[8];
    unsigned char pad34[0x9c];
    Key key;
    unsigned char padD4[0x14];
    int id;
    int flag236;
    unsigned char padF0[0x14];
    int sub260;
};
extern "C" {
int FUN_020464b0(void);
int FUN_0203a820(void *, int);
int FUN_0203a1a8(void *, int);
int FUN_0204c1d8(void *, int *);
int FUN_0204b748(void *);
void *FUN_02045bd8(int, void *, int, int, int, void (*)(void), void *);
void *FUN_02045b50(int, int, int);
void FUN_02045e90(void *, void *, int);
void FUN_0204bd24(void);
int FUN_0204b5cc(Obj *s);
}
int FUN_0204b5cc(Obj *s) {
    int result = 0, sub, selection;
    void *p;
    Key b, c, d, a;
    switch (s->state) {
    case 0:
        s->state = 1;
    case 1:
        if (FUN_020464b0() > 1) break;
        sub = 0;
        a = s->key;
        if (FUN_0203a820(&a, 0)) sub = s->sub260;
        selection = -1;
        if (!FUN_0204c1d8(s, &selection)) break;
        b = s->key;
        p = FUN_02045bd8(s->id, &b, s->idx, sub, selection, FUN_0204bd24, s);
        if (s->idx < 7) s->ptrs[s->idx] = p;
        s->state = 2;
    case 2:
        if (s->ptrs[s->idx]) break;
        s->idx++;
        if (s->idx < 7) {
            s->state = 1;
            result = s->v5();
            if (result) s->state = 5;
        } else {
            s->state = 3;
        }
        break;
    case 3:
        c = s->key;
        if (FUN_0203a820(&c, 0)) {
            d = s->key;
            if (FUN_0203a1a8(&d, 17)) {
                result = 1;
            } else {
                int mode = s->sub260;
                if (s->ptrs[0] && mode == 1) {
                    p = FUN_02045b50(s->id, 1, 0);
                    if (!p) return 0;
                    s->ptrs[1] = p;
                }
            }
        }
        FUN_02045e90((char *)s + 52, s->ptrs, result);
        s->flag236 = 2;
        s->v3();
        s->state = 4;
    case 4:
        result = FUN_0204b748(s);
        break;
    case 5:
        break;
    }
    return result;
}
