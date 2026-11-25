// flags: -O4,p
struct Entry_02099df8 {
    unsigned int a;
    unsigned int b;
};
unsigned int FUN_02099df8(struct Entry_02099df8 **self, int index) {
    struct Entry_02099df8 *p = self[4];
    if (p != 0 && index >= 0 && index < 5) {
        return p[index].b;
    }
    return 0;
}
