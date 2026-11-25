//cpp
enum { E0 = 0, E1 = 1 };
struct A { char pad[0x30]; };
struct B { int a; unsigned int flags; };
struct D : A, B {};
extern "C" D *FUN_020a3eb8(B *self) {
    D *res = 0;
    if (self) {
        if (((self->flags & 0x40) ? E1 : E0) != E0) {
            res = (D *)self;
        }
    }
    return res;
}
