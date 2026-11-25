// flags: -O4,p -noThumb
struct S_0200d644 {
    unsigned int f0;
    unsigned int f4;
};
extern struct S_0200d644 DAT_02101e24;
void FUN_0200d644(int index) {
    DAT_02101e24.f4 &= ~(1 << index);
}
