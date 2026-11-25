//cpp
// flags: -O4,s
struct Fx {
    int v;
    Fx() {}
    Fx(int x) : v(x) {}
    inline int operator<=(const Fx& o) const { return v <= o.v; }
    inline int operator>(const Fx& o) const { return v > o.v; }
};
extern "C" {
extern Fx DAT_020fc988;
extern Fx DAT_020fb1d4[];
extern unsigned int DAT_0211a604[];
extern int FUN_020975d0(void *, Fx *, int *);
extern int FUN_02098dcc(void *, int);

int FUN_02097200(char *s, int *limit) {
    Fx lower;
    int result;
    if (*(short *)(s + 16) != 2) {
        result = FUN_020975d0(s, &DAT_020fc988, limit);
    } else {
        if (!(DAT_0211a604[0] & 1)) {
            DAT_020fb1d4[3].v = 6 << 12;
            DAT_0211a604[0] |= 1;
        }
        if (!(DAT_0211a604[2] & 1)) {
            DAT_020fb1d4[2].v = 1 << 12;
            DAT_0211a604[2] |= 1;
        }
        lower.v = *limit >> 1;
        if (FUN_02098dcc(*(void **)(s + 8), 0)) {
            lower = DAT_020fc988;
        } else if (lower <= DAT_020fb1d4[2]) {
            lower = DAT_020fc988;
        } else if (lower > DAT_020fb1d4[3]) {
            lower = DAT_020fb1d4[3];
        }
        result = FUN_020975d0(s, &lower, limit);
    }
    if (result > 0) {
        int old = *(int *)(s + 56);
        *(int *)(s + 52) = 3;
        *(int *)(s + 56) = old;
    } else if (result < 0) {
        int old = *(int *)(s + 56);
        *(int *)(s + 52) = 4;
        *(int *)(s + 56) = old;
    }
    return result != 0;
}
}
