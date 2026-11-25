//cpp
// flags: -O4,s
extern "C" void FUN_02037910(void *, int);
struct Sub_0219c5c4 {
    int f59;
    volatile int f60;
};
struct Self_0219c5c4 {
    int pad0[2];
    int f02;
    int f03;
    int f04;
    int pad1[52];
    int *f57;
    int f58;
    Sub_0219c5c4 sub;
};
extern "C" void FUN_overlay_23__0219c5c4(Self_0219c5c4 *p) {
    Sub_0219c5c4 *sub = &p->sub;
    int *sequence, index;
    if (((sub->f59 != -1) ? 1 : 0) != 0 && (sub->f60 == -1 || ((p->f02 == p->f04) ? 1 : 0) != 0)) {
        index = sub->f60 + 1;
        sub->f60 = index;
        sequence = p->f57 + sub->f59 * 2;
        if (index < sequence[1])
            FUN_02037910(p, ((int *)sequence[0])[index]);
        else {
            sub->f59 = -1;
            sub->f60 = -1;
        }
    }
}
