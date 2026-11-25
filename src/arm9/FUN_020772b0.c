// flags: -O4,s
int FUN_020772b0(unsigned char *self, int *out) {
    unsigned char *p = *(unsigned char **)(self + 4);
    switch (*(signed char *)(p + 0x12)) {
    case 0: *out = 0; return 1;
    case 3: *out = 1; return 1;
    case 4: *out = 2; return 1;
    }
    return 0;
}
