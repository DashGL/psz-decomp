// flags: -O4,s
extern void *FUN_020352a4(void *, int), *FUN_02039200(void *);
extern int FUN_0203bf48(void *);
extern void FUN_02037ff0(void *, void *);
extern void *DAT_02108cf4;
void FUN_020a3274(char *s) {
    int i;
    for (i = 0; i <= 3; i++) {
        if (i < 4 && ((int *)(s + 316))[i]) {
            void *p = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
            if (p && FUN_0203bf48(p)) FUN_02037ff0(p, s + 336 + 12 * i);
        }
    }
}
