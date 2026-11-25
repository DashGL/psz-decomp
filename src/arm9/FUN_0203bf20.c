// flags: -O4,p
struct S_0203bf20 {
    unsigned char pad[0x7b];
    unsigned char v;
};
int FUN_0203bf20(char *self, int index, unsigned int value) {
    if (index >= 0 && index <= 10 && value <= 15) {
        ((struct S_0203bf20 *)(self + index))->v = value;
        return 1;
    }
    return 0;
}
