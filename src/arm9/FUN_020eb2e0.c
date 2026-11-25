// flags: -O4,p
typedef struct {
    unsigned int a;
    unsigned int b;
} Pair;
extern Pair DAT_020ebb98;
extern Pair DAT_020f8c64[];
void FUN_020eb2e0(void) {
    Pair v = DAT_020ebb98;
    DAT_020f8c64[0] = v;
    DAT_020f8c64[9] = v;
    DAT_020f8c64[10] = v;
    DAT_020f8c64[11] = v;
    DAT_020f8c64[12] = v;
    DAT_020f8c64[14] = v;
}
