// flags: -O4,s
//cpp
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual void v19(void *, int);
};
extern "C" {
extern signed char DAT_020ed070[];
extern char *FUN_02036888(void *, int);
extern char *FUN_02084778(int, int);
extern unsigned int FUN_02035b60(unsigned int);
extern int FUN_0207f8dc(void *, int);
extern void *FUN_02035b9c(void *, void *);

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define U(p,o) (*(unsigned int *)((char *)(p)+(o)))
#define H(p,o) (*(short *)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
#define P(p,o) (*(char **)((char *)(p)+(o)))
#define Q(a,b) ((int)(((long long)(int)(a)*(int)(b)+2048)>>12))

void FUN_02035960(char *self, char *out, int index)
{
    char *row = FUN_02036888(self, B(P(P(self, 20), 24) + 8 * index, 1));
    unsigned int *p52 = (unsigned int *)(self + 52);
    char *base = self + 24;
    signed char *entry;
    char *record;
    unsigned char data[6];
    int low, range, flag;

    I(out, 0) = 0;
    if (!B(row, 10)) {
        I(out, 4) = 0;
        low = H(base, 4);
        range = H(base, 2) - low;
        if (!range) range = 1;
        U(out, 184) = (unsigned int)low + FUN_02035b60(range);
        I(out, 184) = Q(I(out, 184), FUN_0207f8dc(self + 100, 0));
        U(out, 200) = U(row, 0);
        I(out, 204) = H(base, 12);
        I(out, 204) = Q(I(out, 204), FUN_0207f8dc(self + 100, 0));
        U(out, 216) = U(row, 4);
        I(out, 220) = H(base, 18);
    } else {
        I(out, 4) = 2;
        low = H(base, 10);
        range = H(base, 8) - low;
        if (!range) range = 1;
        U(out, 184) = (unsigned int)low + FUN_02035b60(range);
        I(out, 184) = Q(I(out, 184), FUN_0207f8dc(self + 100, 0));
        U(out, 200) = U(row, 0);
    }
    U(out, 232) = *p52;
    if (B(row, 10) != 2) {
        I(out, 8) = B(row, 11);
        I(out, 60) = B(row, 14);
        I(out, 64) = B(row, 19);
        I(out, 68) = B(row, 15);
        if (!I(out, 64)) I(out, 64) = 3;
        I(out, 128) = B(row, 16);
        I(out, 132) = B(row, 17);
    } else {
        int arg0;
        entry = DAT_020ed070 + 4 * B(row, 12);
        arg0 = entry[0];
        flag = 1;
        if (entry[1] == 0) flag = 0;
        low = entry[3];
        record = FUN_02084778(arg0, B(row, 13));
        if (flag) FUN_02035b9c(data, record + 6);
        else FUN_02035b9c(data, record);
        I(out, 8) = entry[2];
        if (low != -1) {
            I(out, 60) = low;
            I(out, 64) = data[4];
            I(out, 68) = data[5];
        }
        U(out, 200) = (U(out, 200) * data[0]) / 100u;
    }
    I(out, 36) = B(row, 18);
    ((Obj *)self)->v19(out, index);
}
}
