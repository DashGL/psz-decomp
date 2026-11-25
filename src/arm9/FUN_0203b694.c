//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct S {
    char pad[0xf8];
    unsigned int flags;
};
extern "C" int FUN_0203b694(S *s) {
    unsigned int f = s->flags;
    int a = (f & 0x02000000) ? E1 : E0;
    if (!a) {
        int b = (f & 0x00040000) ? E1 : E0;
        if (!b) return 1;
    }
    return 0;
}
