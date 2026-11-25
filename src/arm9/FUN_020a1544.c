// flags: -O4,s
typedef struct {
    unsigned short pad0, pad2;
    unsigned short low : 3;
    unsigned short bits : 3;
    unsigned short high : 10;
} S1544;
void FUN_020a1544(S1544 *self, int category) {
    unsigned int bit;
    switch (category) {
    case 8: bit = 0; break;
    case 9: bit = 1; break;
    case 10: bit = 2; break;
    default: return;
    }
    self->bits = (unsigned short)(self->bits | (1u << bit));
}
