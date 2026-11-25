// flags: -O4,s
typedef struct { unsigned int w[3]; } Head12;
#pragma thumb off
extern void FUN_0205fdd8(void *, unsigned int);
extern unsigned int FUN_0205fea4(void *, void *, unsigned int);
#pragma thumb reset
unsigned int FUN_020dd788(char *self, const Head12 *source, unsigned int seed) {
    unsigned int table[256];
    *(Head12 *)(self + 16) = *source;
    *(unsigned int *)(self + 28) = seed;
    FUN_0205fdd8(table, 0xedb88320u);
    *(unsigned int *)(self + 60) = FUN_0205fea4(table, self, 60);
    return (*(unsigned int *)(self + 32) |= 1);
}
