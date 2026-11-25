//cpp
// flags: -O4,s
struct Obj_FUN_020b5c64 {
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
    virtual void v3(void *);
    virtual void v4(void *);
};
extern "C" {
extern void FUN_020b6200(void *, void *), FUN_02039534(void *, void *);
extern int FUN_0204db98(void *, int), FUN_020b5ce4(void *, void *, void *, void *, void *);
int FUN_020b5c64(Obj_FUN_020b5c64 *s, void *item, int slot) {
    int all[20], a[4], b[4], c[4];
    s->v2(a);
    s->v3(b);
    s->v4(c);
    FUN_020b6200(s, all);
    if (FUN_0204db98(item, 2) || slot != -1) {
        if (slot < 0 || slot >= 4) slot = 4;
        FUN_02039534(all + 4 * slot, item);
        return FUN_020b5ce4(s, a, b, c, all);
    }
    return FUN_020b5ce4(s, item, b, c, all);
}
}
