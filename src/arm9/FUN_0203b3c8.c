// flags: -O4,p
int FUN_0203b3c8(char *self) {
    unsigned int ok = (*(unsigned int *)(self + 0xf8) & 4) ? 1 : 0;
    if (ok != 0) {
        return 1;
    }
    return 0;
}
