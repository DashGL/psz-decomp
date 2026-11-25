//cpp
// flags: -O4,p
struct G_02032bd4 {
    int f0;
    int f4;
    int f8;
};
struct Inner_02032bd4 {
    unsigned char pad[0x410];
    int val;
};
struct S_02032bd4 {
    Inner_02032bd4 *p;
};
extern G_02032bd4 DAT_0211a3c4;
extern "C" int FUN_02032bd4(S_02032bd4 *s) {
    int active = (DAT_0211a3c4.f8 >= 0) ? 1 : 0;
    if (active != 0 && s->p != 0) {
        return s->p->val;
    }
    return 0;
}
