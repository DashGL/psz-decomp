// flags: -O4,s
extern void *FUN_02099444(void);
extern unsigned int FUN_02099de0(void *, int);
extern void FUN_020654b4(int, void *, unsigned int);

void FUN_02098414(char *self) {
    int i;
    for (i = 0; i < 5; i++) {
        char *p = self + 4 * i;
        if (*(void **)(p + 80)) {
            unsigned int size = FUN_02099de0(FUN_02099444(), i) * 2;
            FUN_020654b4(0, *(void **)(p + 80), size);
        }
    }
}
