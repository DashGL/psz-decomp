//cpp
// flags: -O4,s
extern "C" int FUN_020390d4(void *);
enum { E0 = 0, E1 = 1 };
struct Base1 { char pad[0xf0]; };
struct Base2 {
    int a;
    unsigned int flags;
};
struct Derived : Base1, Base2 {};
extern "C" void *FUN_02039200(Base2 *part) {
    if (part != 0) {
        int ok = (part->flags & 2) ? E1 : E0;
        if (ok) {
            Derived *owner = (Derived *)part;
            if (!FUN_020390d4(owner)) {
                return owner;
            }
        }
    }
    return 0;
}
