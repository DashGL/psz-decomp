// flags: -O4,p -noThumb
extern int FUN_0206a18c(unsigned int, unsigned int);

int FUN_0200d8dc(unsigned char *volatile *self, unsigned int index, short *out) {
    if (!*self) return 0;
    {
        unsigned char *node = *self;
        if (!node[0x2d]) {
            *out = -1;
            return 1;
        }
        *out = (short)FUN_0206a18c(node[0x3c], index);
        return 1;
    }
}
