// flags: -O4,p
struct S_0207a358 {
    unsigned int v[5];
};
extern struct S_0207a358 DAT_0211a448[];
extern struct S_0207a358 DAT_0211a498[];
void FUN_0207a358(int bank, unsigned int a, unsigned int b) {
    if (bank >= 0 && bank <= 3) {
        DAT_0211a448[bank].v[0] = a;
        DAT_0211a498[bank].v[0] = b;
    }
}
