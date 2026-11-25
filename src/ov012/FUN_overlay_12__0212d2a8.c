//cpp
// flags: -O4,s
struct Slot { signed char b[5]; };
struct Row { Slot sides[2]; };
extern "C" int FUN_020848d0(int, int);
extern "C" void *FUN_overlay_12__0212d2a8(Row *p, unsigned int side, unsigned int x, unsigned int y) {
    if (side < 2 && x < 3 && y < 3) {
        int index = FUN_020848d0(x, y);
        if (index != 7) {
            Slot *s = &p[index].sides[side];
            int ok = (s->b[4] >= 0) ? 1 : 0;
            if (ok) return s;
        }
    }
    return 0;
}
