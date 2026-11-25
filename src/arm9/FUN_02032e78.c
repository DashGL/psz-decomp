//cpp
// flags: -O4,p
struct Obj_02032e78 {
    unsigned char pad[0x33];
    unsigned char flags;
};
extern "C" Obj_02032e78 *FUN_02032ca0(void *);
extern "C" int FUN_02032e78(void *a) {
    Obj_02032e78 *p = FUN_02032ca0(a);
    if (p != 0) {
        int ok = ((p->flags & 2) != 0) ? 1 : 0;
        if (ok != 0) {
            return 1;
        }
    }
    return 0;
}
