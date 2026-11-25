// flags: -O4,s
extern void FUN_02046b20(void *);
extern int FUN_02046ac8(void *, void *);
extern void FUN_02046a4c(void *);
#pragma thumb off
extern void FUN_020189e4(void *, void *, void *, void *);
extern void FUN_02018bf8(void *, void *);
#pragma thumb on

typedef struct {
    unsigned int f0;
    unsigned int b0 : 1;
    unsigned int b1 : 1;
    unsigned int b2 : 1;
    unsigned int rest : 29;
    void *f8;
    void *fc;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void *f24;
    unsigned int f28_lo : 12;
    unsigned int f28_hi : 20;
} S_469dc;

int FUN_020469dc(char *s, void *resource) {
    if (resource) {
        unsigned int enabled;
        unsigned int aligned;
        unsigned int flags;
        FUN_02046b20(s);
        enabled = 0;
        aligned = 0;
        flags = *(unsigned int *)(s + 4);
        do {
            if (!(flags & 2)) break;
            if (((S_469dc *)s)->f28_lo != 0) break;
            aligned = 1;
        } while (0);
        if (aligned) {
            if (flags & 32) enabled = 1;
        }
        if (enabled) return FUN_02046ac8(s, resource);
        FUN_02046a4c(s);
        *(void **)(s + 24) = resource;
        *(void **)(s + 32) = resource;
        FUN_020189e4(*(void **)(s + 20), *(void **)(s + 24), *(void **)(s + 8), *(void **)(s + 12));
        FUN_02018bf8(*(void **)(s + 16), *(void **)(s + 20));
        ((S_469dc *)s)->b1 = 1;
        ((S_469dc *)s)->b2 = 1;
        return 1;
    }
    return 0;
}
