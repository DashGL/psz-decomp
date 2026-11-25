//cpp
// flags: -O4,s
extern "C" {
extern void FUN_02075068(void *, int);
extern void FUN_02072724(void *, int);
extern void FUN_overlay_23__0219a48c(void *);
extern void FUN_020ba8b4(void *);
}
struct Rec {
    int pad[7];
    int a;
    int b;
    int pad2;
};
struct Obj {
    int pad[54];
    Rec *arr;
    int count;
};
extern "C" void FUN_overlay_23__0219a5d0(Obj *self) {
    if (self->arr) {
        for (int i = 0; i < self->count; i++) {
            Rec *p = &self->arr[i];
            FUN_02075068(self, p->a);
            FUN_02072724(self, p->b);
            FUN_overlay_23__0219a48c(p);
        }
        if (self->arr) {
            FUN_020ba8b4(self->arr);
            self->arr = 0;
        }
    }
}
