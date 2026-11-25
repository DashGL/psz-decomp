// flags: -O4,s
extern unsigned int FUN_02037208(void *, unsigned int);
extern int FUN_overlay_19__0219b6fc(void *, const int *);
int FUN_overlay_19__0219b60c(unsigned char *self) {
    int threshold;
    unsigned int bound;
    if (*(signed char *)(self + 100) == 4) return 0;
    bound = 5;
    if (*(int *)(self + 144) == 1) bound *= 3;
    if (FUN_02037208(*(void **)(self + 4), bound)) return 0;
    threshold = 2896;
    return FUN_overlay_19__0219b6fc(self, &threshold);
}
