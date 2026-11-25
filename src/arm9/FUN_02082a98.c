// flags: -O4,s
typedef struct { short v[16]; } Settings;
extern void *FUN_020ba894(unsigned int), *FUN_02031a74(void);
extern char *FUN_02081e40(void *);
extern void FUN_02031ce8(void *, void *), FUN_02081ea8(void *, void *), FUN_02081f4c(void *, void *, int), FUN_0208286c(void *), FUN_02081ea4(void *), FUN_020ba8ac(void *);
extern int FUN_02082364(void *, void *, int, void *);
void FUN_02082a98(char *s, int *input) {
    Settings b, a;
    int i;
    char *p = FUN_020ba894(2208);
    if (p) p = FUN_02081e40(p);
    if (p) {
        FUN_02031ce8(&a, FUN_02031a74());
        b = a;
        FUN_02081ea8(p, &b);
        FUN_02081f4c(p, &b, input[0]);
        for (i = 0; i < 20; i++) FUN_0208286c(s + 52 * i);
        *(int *)(s + 1040) = *(int *)(p + 2168);
        *(int *)(s + 1044) = FUN_02082364(p, s, *(int *)(s + 1040), input);
    }
    if (p) { if (p) { FUN_02081ea4(p); FUN_020ba8ac(p); } }
}
