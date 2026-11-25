//cpp
// flags: -O4,s
struct S020512d8 {
    unsigned char pad[0x5c];
    unsigned int index;
};
struct Entry020512d8 {
    void (S020512d8::*fn)();
    unsigned int rest[4];
};
extern "C" const Entry020512d8 DAT_020f9798[];
extern "C" void FUN_020512d8(S020512d8 *self, unsigned int index) {
    self->index = index;
    void (S020512d8::*fn)() = DAT_020f9798[index].fn;
    if (fn) (self->*fn)();
}
