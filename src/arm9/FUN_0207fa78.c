// flags: -O4,p
struct Sub_0207fa78 {
    int f0;
    int f4;
};
struct S_0207fa78 {
    unsigned char pad[0x44];
    struct Sub_0207fa78 *f44;
    int f48;
};
extern void *DAT_02108c68;
extern int FUN_02033430(void *, int, int, int);
int FUN_0207fa78(struct S_0207fa78 *s, int arg) {
    if (arg == 0 && s->f48 != 0 && FUN_02033430(DAT_02108c68, 5, 0, s->f44->f4) != 0) {
        return 1;
    }
    return 0;
}
