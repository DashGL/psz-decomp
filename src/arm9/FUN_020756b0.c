//cpp
// flags: -O4,s
#pragma opt_propagation off
struct V337 { int x, y, z; };
struct Fix12;
extern "C" {
extern unsigned int UNK_0211a390[];
extern Fix12 UNK_020f9f80[];
extern int FUN_020390f4(void *);
extern unsigned short FUN_02070870(void *, void *);
extern int FUN_0203bee0(void *);
extern int FUN_0205c86c(void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_020bc5cc(void *, const void *, const void *);
extern void FUN_020bc610(void *, const void *, const void *);
extern void FUN_0206f0dc(void *, unsigned short, int);
extern void FUN_0206f7b8(void *);
extern void FUN_0206f7e4(void *);
extern void FUN_0206f090(void *, unsigned short);
}

struct Fix12 {
    int v;
    inline Fix12() {}
    inline Fix12(int x) : v(x) {}
    inline bool operator>=(const Fix12 &o) const { return v >= o.v; }
    inline bool operator<(const Fix12 &o) const { return v < o.v; }
    inline bool operator>(const Fix12 &o) const { return o.v < v; }
    inline int sub(int o) const { return v - o; }
};

static inline Fix12 fxMul(const Fix12 &a, const Fix12 &b) {
    Fix12 r;
    FUN_020bc5cc(&r, &a, &b);
    return r;
}

extern "C" void FUN_020756b0(char *s) {
    V337 current, target, diff;
    unsigned short angle;
    Fix12 speed, distance, threshold, factor;
    Fix12 part1, lowdelta, ratio1;
    Fix12 part2, highdelta, ratio2, excess, span;

    if (FUN_020390f4(s)) return;
    FUN_020345f0(&current, s + 156);
    FUN_020345f0(&target, s + 588);
    angle = FUN_02070870(s, &target);
    speed.v = FUN_0203bee0(s);

    if (!(UNK_0211a390[6] & 1)) { UNK_020f9f80[6].v = 4506; UNK_0211a390[6] |= 1; }
    diff.x = target.x - current.x;
    diff.y = target.y - current.y;
    diff.z = target.z - current.z;
    distance.v = FUN_0205c86c(&diff);
    FUN_020bc5cc(&threshold, &speed, &UNK_020f9f80[6]);

    if (distance >= threshold) {
        if (!(UNK_0211a390[5] & 1)) { UNK_020f9f80[5].v = 819; UNK_0211a390[5] |= 1; }
        if (!(UNK_0211a390[4] & 1)) { UNK_020f9f80[4].v = 6144; UNK_0211a390[4] |= 1; }
        if (!(UNK_0211a390[3] & 1)) { UNK_020f9f80[3].v = 4096; UNK_0211a390[3] |= 1; }
        if (!(UNK_0211a390[2] & 1)) { UNK_020f9f80[2].v = 6144; UNK_0211a390[2] |= 1; }
        if (!(UNK_0211a390[1] & 1)) { UNK_020f9f80[1].v = 8192; UNK_0211a390[1] |= 1; }
        if (!(UNK_0211a390[0] & 1)) { UNK_020f9f80[0].v = 40960; UNK_0211a390[0] |= 1; }

        if (distance < UNK_020f9f80[2]) {
            lowdelta.v = UNK_020f9f80[3].v - UNK_020f9f80[5].v;
            FUN_020bc610(&ratio1, &distance, &UNK_020f9f80[2]);
            FUN_020bc5cc(&part1, &lowdelta, &ratio1);
            factor.v = UNK_020f9f80[5].v + part1.v;
        } else if (distance > UNK_020f9f80[1]) {
            if (distance < UNK_020f9f80[0]) {
                span.v = UNK_020f9f80[0].sub(UNK_020f9f80[1].v);
                excess.v = distance.sub(UNK_020f9f80[1].v);
                highdelta.v = UNK_020f9f80[4].v - UNK_020f9f80[3].v;
                FUN_020bc610(&ratio2, &excess, &span);
                FUN_020bc5cc(&part2, &highdelta, &ratio2);
                factor.v = UNK_020f9f80[3].v + part2.v;
            } else {
                factor.v = UNK_020f9f80[4].v;
            }
        } else {
            factor.v = UNK_020f9f80[3].v;
        }
        *(int *)(s + 256) = fxMul(speed, factor).v;
        *(unsigned short *)(s + 194) = angle;
        FUN_0206f0dc(s, *(unsigned short *)(s + 194), fxMul(speed, factor).v);
    } else {
        *(unsigned short *)(s + 194) = angle;
        *(unsigned short *)(s + 600) = angle;
        *(unsigned short *)(s + 192) = angle;
        switch ((unsigned char)s[602]) {
        case 1:
            FUN_0206f7b8(s);
            *(int *)(s + 576) = 1;
            break;
        case 3:
            FUN_0206f7e4(s);
            *(int *)(s + 576) = 2;
            break;
        default:
            FUN_0206f090(s, *(unsigned short *)(s + 600));
            *(int *)(s + 576) = 0;
            break;
        }
    }
}
