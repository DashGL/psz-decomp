// flags: -O4,p -noThumb
struct S_02064870 {
    unsigned int f0;
    unsigned int b0 : 1;
};
int FUN_02064870(struct S_02064870 *p) {
    return p->b0 != 0;
}
