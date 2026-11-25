//cpp
// flags: -O4,p
struct S_0203b674 {
    unsigned char pad[0xf8];
    unsigned int flags;
};
extern "C" int FUN_0203b674(S_0203b674 *s) {
    int ok = ((s->flags & 0x00080000) == 0) ? 1 : 0;
    if (ok != 0) {
        return 1;
    }
    return 0;
}
