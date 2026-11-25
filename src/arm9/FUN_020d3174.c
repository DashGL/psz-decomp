// flags: -O4,p
extern unsigned int FUN_020d4da0(void *, unsigned int **, unsigned int, unsigned int);
unsigned int FUN_020d3174(void *self, unsigned int **out, unsigned int address, unsigned int port) {
    int r = FUN_020d4da0(self, out, address, port); if (r) return r; (*out)[3] = 0; (*out)[4] = 1; return 0;
}
