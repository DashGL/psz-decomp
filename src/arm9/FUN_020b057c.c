// flags: -O4,s
extern int FUN_020b077c(void *);
enum { E0 = 0, E1 = 1 };

int FUN_020b057c(char *self) {
    int index = FUN_020b077c(self);
    if (index >= 0 && index < *(short *)(self + 0xc)) {
        unsigned char *records = *(unsigned char **)(self + 4);
        if (records[index * 16] == 0) {
            unsigned int *flags = *(unsigned int **)(self + 8);
            if (((flags[index] & 1) ? E1 : E0) == 1) {
                flags[index] &= ~1u;
                return 1;
            }
        }
    }
    return 0;
}
