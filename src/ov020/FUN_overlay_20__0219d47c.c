//cpp
// flags: -O4,s
extern "C" {
extern void FUN_02072724(void *, int);
extern void FUN_02075068(void *, int);
extern void FUN_020ba8b4(void *);
extern int DAT_020ed09c;
}
struct Rec {
    int a;
    int b;
    int pad[5];
};
struct Obj {
    int pad[55];
    Rec *arr;
};
extern "C" void FUN_overlay_20__0219d47c(Obj *p) {
    if (p->arr) {
        int invalid = DAT_020ed09c;
        int i = 0;
        do {
            Rec *r = &p->arr[i];
            int ok = (r->b != invalid) ? 1 : 0;
            if (ok) {
                FUN_02072724(p, r->a);
                FUN_02075068(p, r->b);
            }
            i++;
        } while (i < 6);
        FUN_020ba8b4(p->arr);
        p->arr = 0;
    }
}
