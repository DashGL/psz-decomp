//cpp
// flags: -O4,p
struct Base1_0209b2a4 {
    unsigned char pad[0x30];
};
struct Base2_0209b2a4 {
    int f0;
    unsigned int flags;
};
struct Derived_0209b2a4 : Base1_0209b2a4, Base2_0209b2a4 {
};
extern "C" Derived_0209b2a4 *FUN_0209b2a4(Base2_0209b2a4 *p) {
    Derived_0209b2a4 *ret = 0;
    if (p != 0) {
        int ok = ((p->flags & 0x100) != 0) ? 1 : 0;
        if (ok != 0) {
            ret = static_cast<Derived_0209b2a4 *>(p);
        }
    }
    return ret;
}
