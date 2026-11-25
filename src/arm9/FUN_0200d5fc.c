// flags: -O4,p -noThumb
typedef struct {
    unsigned int a, mask;
} State;
extern State DAT_02101e24;
unsigned int FUN_0200d5fc(void) {
    unsigned int snapshot = DAT_02101e24.mask;
    int i;
    unsigned int bit = 1;
    for (i = 0; i < 8; ++i, bit <<= 1) {
        if (!(snapshot & bit)) {
            DAT_02101e24.mask |= bit;
            return i;
        }
    }
    return ~0u;
}
