//cpp
// flags: -O4,p
struct Child_020375f0 {
    unsigned char pad[0x2c];
    unsigned int flags;
};
struct S_020375f0 {
    unsigned char pad[0x10];
    Child_020375f0 *child;
};
extern "C" int FUN_020375f0(S_020375f0 *s) {
    int ret = 0;
    if (s->child != 0) {
        int ok = ((s->child->flags & 2) != 0) ? 1 : 0;
        if (ok != 0) {
            ret = 1;
        }
    }
    return ret;
}
