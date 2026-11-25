//cpp
// flags: -O4,p
struct Obj_02032e30 {
    unsigned char pad[0x32];
    signed char f32;
};
struct S_02032e30 {
    void *p;
};
extern "C" Obj_02032e30 *FUN_02032e5c(void *);
extern "C" int FUN_02032e30(S_02032e30 *s) {
    if (s->p != 0) {
        Obj_02032e30 *o = FUN_02032e5c(s->p);
        if (o != 0) {
            int ok = (o->f32 >= 0) ? 1 : 0;
            if (ok != 0) {
                return 1;
            }
        }
    }
    return 0;
}
