//cpp
// flags: -O4,s
struct Vec4 {
    int x, y, z, w;
};
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2(struct Vec4 *);
    virtual void v3(struct Vec4 *);
    virtual void v4(struct Vec4 *);
};
extern "C" {
extern void FUN_020b6200(struct Obj *, struct Vec4 *);
extern int FUN_0204db98(void *, int);
extern void FUN_02039534(struct Vec4 *, void *);
extern void FUN_020b5eec(struct Obj *, void *, struct Vec4 *, void *, struct Vec4 *);
void FUN_020b5e54(struct Obj *s, void *p, int idx);
}

void FUN_020b5e54(struct Obj *s, void *p, int idx) {
    struct Vec4 arr[5];
    struct Vec4 a, b, c;
    s->v2(&a);
    s->v4(&b);
    s->v3(&c);
    FUN_020b6200(s, arr);
    if (FUN_0204db98(p, 2) || idx != -1) {
        if (idx < 0 || idx >= 4) {
            idx = 4;
        }
        FUN_02039534(&arr[idx], p);
        FUN_020b5eec(s, &a, &c, &b, arr);
    } else if (FUN_0204db98(p, 0)) {
        FUN_020b5eec(s, p, &c, &b, arr);
    } else {
        FUN_020b5eec(s, &a, &c, p, arr);
    }
}
