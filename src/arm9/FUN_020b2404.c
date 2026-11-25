// flags: -O4,s
int FUN_020b2404(unsigned int *self, unsigned int value) {
    int count = self[7], i;
    for (i = 0; i < count; i++) {
        if (self[i] == value) {
            self[i] = self[count - 1];
            self[7] = self[7] - 1;
            return 1;
        }
    }
    return 0;
}
