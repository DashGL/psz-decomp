// flags: -O4,p
extern unsigned int FUN_020d4da0(void *, unsigned int **, unsigned int, unsigned int);
unsigned int FUN_020d3190(void *self, unsigned int **out, unsigned int address, unsigned int port) {
    int r = FUN_020d4da0(self, out, address, port);
    if (r) return r;
    (*out)[3] = 2;
    (*out)[4] = 0;
    return 0;
}
