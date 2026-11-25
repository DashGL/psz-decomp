//cpp
// flags: -O4,p
struct S_02084c2c {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    unsigned int fc;
};
extern "C" int FUN_02084c2c(S_02084c2c *s) {
    int ok = (s->f4 == 2) ? 1 : 0;
    if (ok != 0 && s->fc == 1) {
        return 1;
    }
    return 0;
}
