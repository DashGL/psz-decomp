//cpp
// flags: -O4,p
struct S_020390d4 {
    unsigned char pad[0xf8];
    unsigned int flags;
};
extern "C" int FUN_020390d4(S_020390d4 *s) {
    int ok = ((s->flags & 0x00800000) != 0) ? 1 : 0;
    if (ok != 0) {
        return 1;
    }
    return 0;
}
