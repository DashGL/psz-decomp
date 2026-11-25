// flags: -O4,p
int FUN_0208ecec(char *self) {
    unsigned char *child = *(unsigned char **)(self + 0x4c);
    unsigned int ok = (child[0] & 1) ? 1 : 0;
    if (ok != 0) {
        return 1;
    }
    return 0;
}
