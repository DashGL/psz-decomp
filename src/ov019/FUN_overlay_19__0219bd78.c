//cpp
// flags: -O4,s
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, int);
};
struct Pairs { int id[4][2]; };
extern "C" {
extern const struct Pairs DAT_0219cd5c;
extern struct Obj *FUN_overlay_19__02198500(void *, int);

void FUN_overlay_19__0219bd78(void **self) {
    void *owner = self[1];
    struct Pairs pairs = DAT_0219cd5c;
    int found = 0;
    int index;
    for (index = 0; index < 4; index++) {
        int value = found * (50 << 12) + 20;
        struct Obj *first = FUN_overlay_19__02198500(owner, pairs.id[index][0]);
        struct Obj *second;
        if (first) first->v5(owner, value);
        second = FUN_overlay_19__02198500(owner, pairs.id[index][1]);
        if (second) second->v5(owner, value);
        if (first || second) found++;
        if (found >= 2) break;
    }
}
}
