// flags: -O4,s
//cpp
struct Fx {
    int v;
    Fx() {}
    Fx(int x) : v(x) {}
    int get() const { return v; }
};
extern int DAT_020fc988;
extern "C" int FUN_overlay_20__02198f28(void *);
extern "C" Fx FUN_020bc610(int *, int *);

struct Obj {
    char pad[0xd4];
    int *ptr;
};

extern "C" int FUN_overlay_20__02198f3c(Obj *p) {
    int denom = FUN_overlay_20__02198f28(p);
    int cond = (denom > DAT_020fc988) ? 1 : 0;
    if (cond != 0) {
        return FUN_020bc610(p->ptr + 2, &denom).get();
    }
    return 4096;
}
