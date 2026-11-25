// flags: -O4,s
extern int FUN_020b086c(void *);
enum { E0 = 0, E1 = 1 };

int FUN_020b0684(char *self) {
    int index = FUN_020b086c(self);
    if (index >= 0 && index < *(short *)(self + 0xc)) {
        unsigned char *records = *(unsigned char **)(self + 4);
        unsigned char *rec = records + index * 16;
        if (records[index * 16] == 0 && rec[1] == 0x11) {
            unsigned int *flags = *(unsigned int **)(self + 8);
            if (((flags[index] & 4) ? E1 : E0) == 1) {
                flags[index] &= ~4u;
                return 1;
            }
        }
    }
    return 0;
}
