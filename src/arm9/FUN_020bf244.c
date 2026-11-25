// flags: -O4,s
//cpp
struct EBF { char d[0x2c]; };
struct SBF {
    char pad[0x13e0];
    signed char used[0x60];
    EBF entries[0x60];
};
extern "C" void *FUN_020bf244(SBF *self) {
    for (int i = 0; i < 0x60; i++) {
        if (self->used[i] == 0) {
            self->used[i] = 1;
            return &self->entries[i];
        }
    }
    return 0;
}
