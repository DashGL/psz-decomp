// flags: -O4,s
typedef struct { unsigned int a, b, c; } Entry;
extern const Entry DAT_020f6d30[];
#pragma thumb off
extern unsigned int FUN_02020a44(unsigned int);
extern unsigned int FUN_02020da4(unsigned int);
extern void FUN_02020a4c(unsigned int, unsigned int, void *, unsigned int, int);
extern void FUN_02020dac(unsigned int, void *, unsigned int, int);
extern void FUN_02020ba8(void);
extern void FUN_02020f10(void);
#pragma thumb reset
extern void *FUN_020ba8bc(unsigned int, unsigned int);
void FUN_020340d4(char *s) {
    const Entry *p;
    int index = *(int *)(s + 120);
    if (index >= 0) p = &DAT_020f6d30[index];
    else p = (const Entry *)(s + 52);
    *(unsigned int *)(s + 104) = FUN_02020a44(32);
    *(void **)(s + 108) = FUN_020ba8bc(*(unsigned int *)(s + 104), 16);
    FUN_02020a4c(p->a, p->b, *(void **)(s + 108), *(unsigned int *)(s + 104), 1);
    FUN_02020ba8();
    *(unsigned int *)(s + 112) = FUN_02020da4(32);
    *(void **)(s + 116) = FUN_020ba8bc(*(unsigned int *)(s + 112), 16);
    FUN_02020dac(p->c, *(void **)(s + 116), *(unsigned int *)(s + 112), 1);
    FUN_02020f10();
}
