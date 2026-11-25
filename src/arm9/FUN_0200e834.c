// flags: -O4,s -noThumb
typedef struct { unsigned int a, b; } Pair;
extern unsigned int DAT_02102874;
extern unsigned int FUN_02059ebc(void *, unsigned int);
extern unsigned int FUN_02059cd4(void *);
extern unsigned int FUN_02059f44(void *, Pair);
extern unsigned int FUN_0200e8c4(void *, unsigned int, unsigned int);
unsigned int FUN_0200e834(char *self, unsigned int path, unsigned int archive, unsigned int extra) {
    unsigned int result;
    *(unsigned int *)(self + 140) = 0;
    *(unsigned int *)(self + 132) = 0;
    *(unsigned int *)(self + 136) = 0;
    *(unsigned int *)(self + 144) = 0;
    if (!FUN_02059ebc(self + 124, path)) return 0;
    FUN_02059cd4(self + 52);
    if (!FUN_02059f44(self + 52, *(Pair *)(self + 124))) return 0;
    *(unsigned int *)(self + 48) = 1;
    result = FUN_0200e8c4(self, archive, extra);
    if (!result) return 0;
    DAT_02102874 = (unsigned int)self;
    return 1;
}
