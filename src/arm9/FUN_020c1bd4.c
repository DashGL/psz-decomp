// flags: -O4,s
//cpp
enum { E0 = 0, E1 = 1 };
struct Vec3 { int x, y, z; };
struct SinCos { short sin_val, cos_val; };
struct Fx {
    int v;
    Fx() {}
    Fx(int x) : v(x) {}
    Fx operator-(const Fx &o) const { return Fx(v - o.v); }
    Fx operator+(const Fx &o) const { return Fx(v + o.v); }
    Fx operator/(const Fx &o) const;
    Fx operator*(const Fx &o) const;
    int operator>(const Fx &o) const { return (v > o.v) ? E1 : E0; }
    int operator<(const Fx &o) const { return (v < o.v) ? E1 : E0; }
    int operator<=(const Fx &o) const { return (v <= o.v) ? E1 : E0; }
    int operator>=(const Fx &o) const { return (v >= o.v) ? E1 : E0; }
};
struct Cfg {
    Fx panScale;
    int farDist;
    int nearDist;
    int minPanDist;
};

extern "C" {
extern int DAT_020fc988;
extern Cfg DAT_020fca54;
extern Fx UNK_020fca54;
extern SinCos DAT_020ed83c[];
extern int FUN_0205c86c(const Vec3 *);
extern void FUN_0205c8cc(const Vec3 *, Vec3 *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
}

inline Fx Fx::operator/(const Fx &o) const {
    Fx r;
    FUN_020bc610(&r.v, &v, &o.v);
    return r;
}
inline Fx Fx::operator*(const Fx &o) const {
    Fx r;
    FUN_020bc5cc(&r.v, &v, &o.v);
    return r;
}

extern "C" void FUN_020c1bd4(short *out, const Vec3 *origin, unsigned int heading, const Vec3 *source, int radius, unsigned int flags) {
    out[0] = 0;
    out[1] = 0;
    Vec3 vec;
    int dz = source->z - origin->z;
    int dy = source->y - origin->y;
    int dx = source->x - origin->x;
    vec.x = dx;
    *(volatile int *)&vec.y = dy;
    vec.z = dz;
    vec.y = DAT_020fc988;
    Fx distance(FUN_0205c86c(&vec));
    if (vec.x != 0 || vec.y != 0 || vec.z != 0) {
        FUN_0205c8cc(&vec, &vec);
    }
    Fx farLimit, middle;
    int nd = DAT_020fca54.nearDist;
    Fx nearLimit;
    *(volatile int *)&nearLimit.v = nd + radius;
    middle = Fx((nd << 1) + radius);
    int fd = *(volatile int *)&DAT_020fca54.farDist;
    farLimit = Fx(fd + radius);
    if (distance > nearLimit && distance < farLimit) {
        if (flags & 1) {
            Fx gain(-393216);
            Fx num = distance - nearLimit;
            Fx den = farLimit - nearLimit;
            Fx ratio = num / den;
            Fx val = gain * ratio;
            out[0] = (short)(val.v >> 12);
        } else if (distance <= middle) {
            Fx gain(127 << 12);
            Fx ratio = distance / nearLimit;
            Fx val = gain / (ratio * ratio);
            out[0] -= (short)((gain.v - val.v) >> 12);
        } else {
            Fx gain(-131072);
            Fx num = distance - middle;
            Fx den = farLimit - middle;
            Fx ratio = num / den;
            Fx val = gain * ratio;
            out[0] = (short)((val.v >> 12) - 96);
        }
    } else if (distance >= farLimit) {
        if (flags & 1) {
            out[0] = -96;
        } else {
            out[0] = -128;
        }
    }
    if (distance > Fx(DAT_020fca54.minPanDist)) {
        unsigned short angle = FUN_0205cc08(vec.z);
        if (vec.x < 0) {
            angle = (unsigned short)(0x10000 - angle);
        }
        angle = (unsigned short)(heading - angle);
        Fx sine(-DAT_020ed83c[(int)angle >> 4].sin_val);
        out[1] = (short)((UNK_020fca54 * sine).v >> 12);
    }
}
