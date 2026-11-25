// flags: -O4,s
extern int FUN_0207f12c(void *, unsigned int *, unsigned int *, unsigned int);
void FUN_0207f0b4(unsigned int *self, unsigned int bit) {
    unsigned int index = 0, mask = 0;
    if (FUN_0207f12c(self, &index, &mask, bit)) {
        unsigned int *slot = (unsigned int *)self[0] + index;
        if (!(*slot & mask)) {
            *slot |= mask;
            ++self[3];
        }
    }
}
