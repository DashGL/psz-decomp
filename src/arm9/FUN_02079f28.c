// flags: -O4,p
struct Sub {
    char pad[0x12];
    signed char f12;
};
struct Obj {
    int f0;
    struct Sub *f4;
    char pad[0x30];
    int f38;
};
extern void *FUN_0212bde0(void);
extern void FUN_0212c124(void *, int);
extern void FUN_0212be58(void *, int);
extern void FUN_0212bea4(void *, int);

void FUN_02079f28(struct Obj *a, int b, int c) {
    if (a->f38 & 4) {
        void *p = FUN_0212bde0();
        if (p != 0) {
            int t = a->f4->f12;
            if (t == 1 || t == 2) {
                FUN_0212c124(p, 1);
            } else {
                FUN_0212c124(p, 0);
            }
            if (c != 0) {
                FUN_0212be58(p, b);
            } else {
                FUN_0212bea4(p, b);
            }
        }
    }
}
