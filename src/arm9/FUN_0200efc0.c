// flags: -O4,p -noThumb
struct Pair_0200efc0 {
    unsigned int a;
    unsigned int b;
};
struct Ctx_0200efc0 {
    unsigned char pad[0x7c];
    struct Pair_0200efc0 pair;
};
extern struct Ctx_0200efc0 *DAT_02102874;
void FUN_0200efc0(struct Pair_0200efc0 *out) {
    *out = DAT_02102874->pair;
}
