// flags: -O4,s
void FUN_0209a9d8(void *unused, char *self) {
    if (self) {
        int count, i;
        char *p;
        int j;
        count = *(unsigned short *)self;
        for (i = 0; i < count; i++) {
            p = *(char **)(self + 4) + 36 * i;
            for (j = 0; j < 3; j++) {
                *(unsigned short *)(p + 20 + 2 * j) = 0;
            }
            *(unsigned short *)(p + 28) = 50001;
        }
    }
}
