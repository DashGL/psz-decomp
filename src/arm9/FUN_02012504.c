// flags: -O4,s -noThumb
int FUN_02012504(unsigned int *self, unsigned int key) {
    unsigned int *n = (unsigned int *)self[11];
    if (key != 0 && n != 0) {
        do {
            if (n[0] == key) break;
            n = (unsigned int *)n[3];
        } while (n != 0);
    }
    if (!n) return 0;
    self[9] = n[1];
    self[10] = n[2];
    self[11] = n[3];
    return 1;
}