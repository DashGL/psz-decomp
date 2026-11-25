enum { E0 = 0, E1 = 1 };
extern unsigned int FUN_0208e6b4(void *, unsigned int, unsigned int);
unsigned int FUN_020b2278(unsigned int *self, unsigned int a, unsigned int b) {
    if (((self[26] & 4) == 4 ? E1 : E0) != E0) {
        return FUN_0208e6b4(self, a, b);
    }
    return 0;
}
