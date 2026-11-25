// flags: -O4,s
extern unsigned int FUN_020c51dc(unsigned int *, unsigned int, unsigned int);
#pragma thumb off
extern void *FUN_020014f4(void *, const void *, unsigned int);
#pragma thumb on
extern void *FUN_020ba8bc(unsigned int, unsigned int);
extern void FUN_020ba8c4(void *);
unsigned int FUN_020c5168(unsigned int *self, unsigned int dest, unsigned int source, unsigned int total, unsigned int offset) {
    unsigned int buffer[64], remaining = total - offset, result;
    self[3] = dest + offset;
    if (remaining == 0) {
        self[4] = 0;
        return FUN_020c51dc(self, dest, source);
    }
    if (remaining <= 256) {
        self[4] = (unsigned int)buffer;
        FUN_020014f4(buffer, (void *)self[3], remaining);
        return FUN_020c51dc(self, dest, source);
    }
    self[4] = (unsigned int)FUN_020ba8bc(remaining, 16);
    if (self[4]) {
        FUN_020014f4((void *)self[4], (void *)self[3], remaining);
        result = FUN_020c51dc(self, dest, source);
        FUN_020ba8c4((void *)self[4]);
        return result;
    }
    return 0;
}
