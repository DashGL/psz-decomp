// flags: -O4,p
struct Pair_020eb420 {
    unsigned int a;
    unsigned int b;
};
extern struct Pair_020eb420 DAT_020ebb98;
extern struct Pair_020eb420 DAT_020f9798[3];
void FUN_020eb420(void) {
    struct Pair_020eb420 tmp = DAT_020ebb98;
    DAT_020f9798[0] = tmp;
    DAT_020f9798[1] = tmp;
    DAT_020f9798[2] = tmp;
}
