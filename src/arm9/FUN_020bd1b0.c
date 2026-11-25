//cpp
// flags: -O4,s
extern "C" void FUN_020ba8b4(void *);
struct O020bd1b0 {
    virtual ~O020bd1b0();
};
struct Self020bd1b0 {
    unsigned char pad0[0x20];
    O020bd1b0 *q[4];
    unsigned char pad1[0x8];
    void *p[4];
};
extern "C" void FUN_020bd1b0(Self020bd1b0 *self, int index) {
    if (index >= 0 && index < 4) {
        if (self->p[index]) {
            FUN_020ba8b4(self->p[index]);
            self->p[index] = 0;
        }
        if (self->q[index]) {
            delete self->q[index];
            self->q[index] = 0;
        }
    }
}
