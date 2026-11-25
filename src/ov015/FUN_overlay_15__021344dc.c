// flags: -O4,p
typedef struct {
    unsigned char pad[0x58];
    unsigned int seed;
} Rng;
typedef struct {
    void *unk0;
    Rng *rng;
} Global;
extern Global DAT_0213e8e0;

short FUN_overlay_15__021344dc(unsigned short mask) {
    short i;
    short last = 0;
    unsigned short count = 0;
    unsigned short n;
    for (i = 0; i < 16; i++) {
        if (mask & (1 << i)) {
            last = i + 1;
            count++;
        }
    }
    if (count <= 1) {
        return last;
    }
    DAT_0213e8e0.rng->seed = DAT_0213e8e0.rng->seed * 0x10dcd + 0x3039;
    n = (unsigned short)((count * (DAT_0213e8e0.rng->seed & 0xff)) >> 8);
    for (i = 0; i < 16; i++) {
        if (mask & 1) {
            if (n == 0) {
                return i + 1;
            }
            n--;
        }
        mask >>= 1;
    }
    return 0;
}
