// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct Fix32_020bc910 {
    int v;
    Fix32_020bc910();
    Fix32_020bc910(const Fix32_020bc910 &o);
};

struct Vec2_020bc910 {
    int x, y;
};

extern "C" {
extern Vec2_020bc910 FUN_020bc8fc(const Vec2_020bc910 *, const Vec2_020bc910 *);
extern Fix32_020bc910 FUN_020bc9c0(const Vec2_020bc910 &, const Vec2_020bc910 &);
extern int DAT_020fc988;

int FUN_020bc910(const Vec2_020bc910 *p0, const Vec2_020bc910 *p1, const Vec2_020bc910 *p2, const Vec2_020bc910 *p3) {
    int zero = DAT_020fc988;
    if ((FUN_020bc9c0(FUN_020bc8fc(p0, p1), FUN_020bc8fc(p2, p1)).v < zero) ? 1 : 0) {
        return 0;
    }
    if ((FUN_020bc9c0(FUN_020bc8fc(p0, p2), FUN_020bc8fc(p3, p2)).v < zero) ? 1 : 0) {
        return 0;
    }
    if ((FUN_020bc9c0(FUN_020bc8fc(p0, p3), FUN_020bc8fc(p1, p3)).v >= zero) ? 1 : 0) {
        return 1;
    }
    return 0;
}
}
