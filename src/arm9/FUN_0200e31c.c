// flags: -O4,p -noThumb
typedef struct {
    unsigned int a;
    int b;
} Entry_0200e31c;

extern Entry_0200e31c DAT_02102758[];
extern unsigned int FUN_0206a2b4(int);
extern void FUN_0206975c(unsigned int, unsigned int, int);

typedef struct {
    unsigned char pad0[0x3c];
    int base;
    unsigned char pad1[0x8];
    int count;
    unsigned char channels[16];
} S_0200e31c;

void FUN_0200e31c(S_0200e31c *self, int value) {
    unsigned int ch;
    int i;
    self->base = value;
    for (i = 0; i < self->count; i++) {
        unsigned int encoded;
        ch = self->channels[i];
        encoded = FUN_0206a2b4(self->base + DAT_02102758[ch].b);
        FUN_0206975c(1u << ch, encoded & 0xff, (int)encoded >> 8);
    }
}
