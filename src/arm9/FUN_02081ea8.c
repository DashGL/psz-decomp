// flags: -O4,s
extern int FUN_020832b4(int);
extern void FUN_02083378(void *, int, int);
extern void FUN_02081f98(void *, int);
extern void FUN_020821d0(void *);
extern void FUN_02082228(void *);
extern void FUN_020822ac(void *, int);
void FUN_02081ea8(char *s, signed char *v) {
    int b;
    if (v[0] >= 2 && v[0] <= v[1] && v[1] < 20) {
        int a = 0;
        int d = v[1] - v[0];
        if (d) {
            a = FUN_020832b4(d);
        }
        *(int *)(s + 2172) = v[0] + a;
    } else {
        *(int *)(s + 2172) = 10;
    }
    b = 0;
    if (v[2] >= 0 && v[2] <= v[3] && v[3] < 9) {
        int r = 0;
        int d = v[3] - v[2];
        if (d) {
            r = FUN_020832b4(d);
        }
        b = v[2] + r;
    }
    FUN_02083378(s, *(int *)(s + 2172), b);
    FUN_02081f98(s, v[9]);
    FUN_020821d0(s);
    if (*(int *)(s + 2168) < *(int *)(s + 2172)) {
        FUN_02082228(s);
        FUN_020821d0(s);
    }
    FUN_020822ac(s, v[10]);
}
