//cpp
// flags: -O4,s
#pragma block_assign on
#pragma always_inline on

struct Fixed {
    int v;
    inline Fixed() {}
    inline Fixed(int n) : v(n << 12) {}
};

static inline int fx_le(int a, int b) { if (a <= b) return 1; return 0; }
static inline int fx_eq(int a, int b) { if (a == b) return 1; return 0; }
static inline int fx_ge(int a, int b) { if (a >= b) return 1; return 0; }
static inline int fx_lt(int a, int b) { if (a < b) return 1; return 0; }
static inline Fixed fx_raw(int raw) { Fixed r; r.v = raw; return r; }

struct Vec3 {
    int x, y, z;
};

extern "C" {
extern Fixed DAT_020fc988;
extern Fixed DAT_020faf30;
extern Fixed UNK_020faf30;
extern unsigned int DAT_0211a5b0[];
extern Vec3 DAT_020fc958;
extern unsigned char DAT_020faf34[];

extern Vec3 FUN_02036348(const Vec3 &, const Vec3 &);
extern Vec3 FUN_0203647c(const Vec3 &, const Vec3 &);
extern Fixed FUN_020bc610(const Fixed &, const Fixed &);
extern Fixed FUN_020bc5cc(const Fixed &, const Fixed &);
extern void FUN_02092654(Vec3 &, const Fixed &);
extern Vec3 FUN_02091cc0(const Vec3 &, const Fixed &);
extern void FUN_02091ad4(void *, int, const Fixed *);
extern void FUN_02091ab0(void *, int, int, const Fixed *);
#pragma thumb off
extern int FUN_0205c86c(const Vec3 *);
#pragma thumb reset
}

static inline void setEnds(Vec3 &a, Vec3 &b, Vec3 v) { a = v; b = v; }
struct Spline {
    unsigned char pad00[0x28];
    Fixed lastDist;
    unsigned char pad2c[0x0c];
    Vec3 *point;
    Vec3 *coefficient;
    Vec3 *rhs;
    Vec3 *forward;
    Fixed *distance;
    Fixed *length;
    Fixed *upper;
    Fixed *lower;
    Fixed *ratio;
    Fixed *diagonal;
};

extern "C" int FUN_02091ff0(Spline *s, Vec3 *out, const Vec3 *input, int inputCount, const Fixed *spacing, int capacity) {
    if (inputCount < 2 || fx_le(spacing->v, DAT_020fc988.v) || capacity < 1) {
        return 0;
    }

    int i = 1;
    int kept = 1;
    int lastIn = inputCount - 1;
    Vec3 *point = s->point;
    Fixed *distance = s->distance;
    Fixed *length = s->length;
    Fixed *upper = s->upper;
    Fixed *lower = s->lower;
    Fixed *ratio = s->ratio;
    Fixed *diagonal = s->diagonal;
    Vec3 *coefficient = s->coefficient;
    Vec3 *rhs = s->rhs;
    Vec3 *forward = s->forward;

    int produced = 0;
    Fixed current;
    current.v = 0;

    point[0] = input[0];
    distance[0] = DAT_020fc988;

    for (; i <= lastIn; i++) {
        Vec3 diff = FUN_02036348(input[i], input[i - 1]);
        int len = FUN_0205c86c(&diff);
        if (fx_le(len, DAT_020fc988.v)) {
            continue;
        }
        point[kept] = input[i];
        int prev = distance[kept - 1].v;
        distance[kept].v = prev + len;
        length[kept].v = len;
        kept++;
    }

    if (kept < 2) {
        goto done;
    }

    int last = kept - 1;
    for (int i = 1; i <= last - 1; i++) {
        upper[i] = FUN_020bc610(length[i + 1], fx_raw(length[i].v + length[i + 1].v));
    }
    for (int i = 1; i <= last - 1; i++) {
        lower[i].v = Fixed(1).v - upper[i].v;
    }
    diagonal[1].v = (2 << 12);
    for (int i = 2; i <= last - 1; i++) {
        ratio[i] = FUN_020bc610(lower[i], diagonal[i - 1]);
        diagonal[i].v = (2 << 12) - FUN_020bc5cc(ratio[i], upper[i - 1]).v;
        if (fx_eq(diagonal[i].v, DAT_020fc988.v)) {
            goto done;
        }
    }

    for (int i = 1; i <= last - 1; i++) {
        Vec3 r;
        Fixed invNext = FUN_020bc610(Fixed(1), length[i + 1]);
        Fixed invCur = FUN_020bc610(Fixed(1), length[i]);
        Vec3 d1 = FUN_02036348(point[i + 1], point[i]);
        FUN_02092654(d1, invNext);
        Vec3 d0 = FUN_02036348(point[i], point[i - 1]);
        FUN_02092654(d0, invCur);
        r = FUN_02036348(d1, d0);
        Fixed scale = FUN_020bc610(Fixed(6), fx_raw(length[i].v + length[i + 1].v));
        FUN_02092654(r, scale);
        rhs[i] = r;
    }

    forward[1] = rhs[1];
    for (int i = 2; i <= last - 1; i++) {
        Vec3 t = FUN_02091cc0(forward[i - 1], ratio[i]);
        forward[i] = FUN_02036348(rhs[i], t);
    }

    if (!(DAT_0211a5b0[1] & 1)) {
        *(Vec3 *)DAT_020faf34 = DAT_020fc958;
        DAT_0211a5b0[1] |= 1;
    }
    setEnds(coefficient[0], coefficient[last], *(Vec3 *)DAT_020faf34);

    for (int i = last - 1; i >= 1; i--) {
        Fixed invDiag = FUN_020bc610(Fixed(1), diagonal[i]);
        Vec3 t = FUN_02091cc0(coefficient[i + 1], upper[i]);
        t = FUN_02036348(forward[i], t);
        coefficient[i] = FUN_02091cc0(t, invDiag);
    }

    produced = 0;
    Fixed left, right, inverse;
    left.v = 0;
    right.v = 0;
    inverse.v = 0;
    current.v = distance[0].v;
    out[0] = point[0];
    FUN_02091ad4(s, 0, &current);

    for (int j = 1; j <= last; j++) {
        inverse = FUN_020bc610(Fixed(1), length[j]);
        while (fx_lt(current.v, distance[j].v)) {
            produced++;
            if (produced >= capacity) {
                goto done;
            }
            current.v += spacing->v;
            if (fx_ge(current.v, distance[j].v)) {
                current = distance[j];
            }
            left.v = distance[j].v - current.v;
            right.v = current.v - distance[j - 1].v;

            int t0 = FUN_020bc5cc(FUN_020bc5cc(FUN_020bc5cc(left, left), left), inverse).v;
            int t1 = FUN_020bc5cc(FUN_020bc5cc(FUN_020bc5cc(right, right), right), inverse).v;
            int t2 = FUN_020bc5cc(left, length[j]).v;
            int t3 = FUN_020bc5cc(right, length[j]).v;

            if (!(DAT_0211a5b0[0] & 1)) {
                DAT_020faf30.v = 683;
                DAT_0211a5b0[0] |= 1;
            }

            Fixed t4, t5;
            t4.v = t0 - t2;
            t5.v = t1 - t3;

            Vec3 term1, term2;
            Vec3 c0 = FUN_02091cc0(coefficient[j - 1], t4);
            Vec3 c1 = FUN_02091cc0(coefficient[j], t5);
            term1 = FUN_0203647c(c0, c1);
            FUN_02092654(term1, UNK_020faf30);

            Vec3 p0 = FUN_02091cc0(point[j - 1], left);
            Vec3 p1 = FUN_02091cc0(point[j], right);
            term2 = FUN_0203647c(p0, p1);
            FUN_02092654(term2, inverse);

            out[produced] = FUN_0203647c(term1, term2);
            FUN_02091ad4(s, produced, &current);
        }
        if (produced + 1 < capacity) {
            out[produced + 1] = point[kept - 1];
            FUN_02091ad4(s, produced + 1, &current);
        }
        FUN_02091ab0(s, j, produced, &current);
    }
    produced++;

done:
    s->lastDist = current;
    return produced;
}
