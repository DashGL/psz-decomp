// flags: -O4,s
#pragma thumb off
extern unsigned int FUN_02018984(void *, void *);
extern void FUN_020189e4(void *, void *, void *, int);
extern void FUN_02018cec(void *, void *);
extern void FUN_02018bf8(void *, void *);
#pragma thumb reset
extern char *FUN_020ba8bc(unsigned int, unsigned int);
int FUN_02046ac8(char *s, void *resource) {
    char *p = FUN_020ba8bc(FUN_02018984(resource, *(void **)(s + 8)), 16);
    if (p != 0) {
        *(void **)(s + 24) = resource;
        *(void **)(s + 32) = resource;
        FUN_020189e4(p, resource, *(void **)(s + 8), 0);
        *(int *)(p + 4) = 0;
        FUN_02018cec(*(void **)(s + 16), *(void **)(s + 20));
        FUN_02018bf8(*(void **)(s + 16), p);
        FUN_02018bf8(*(void **)(s + 16), *(void **)(s + 20));
        *(void **)(s + 20) = p;
        *(unsigned int *)(s + 4) |= 0x40;
        *(unsigned int *)(s + 4) |= 4;
        return 1;
    }
    return 0;
}
