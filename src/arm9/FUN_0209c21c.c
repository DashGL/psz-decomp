// flags: -O4,s
extern int FUN_0209c3b8(void *);
extern unsigned int FUN_0209beac(unsigned int);

int FUN_0209c21c(unsigned char *self, unsigned int *mask) {
    int count;
    int i;
    unsigned char *p;

    *mask = 0;
    p = self + 0x17a + FUN_0209c3b8(self) * 5;
    count = 0;
    for (i = 0; i < 5; i++) {
        if (FUN_0209beac(100) < p[i]) {
            *mask |= (1u << i);
            count++;
        }
    }
    return count;
}
