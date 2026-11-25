// flags: -O4,s
extern void *DAT_02108c64;
extern unsigned int DAT_020ec288[];
extern void FUN_020403d0(void *, void *, unsigned int, int);
extern void FUN_020405a8(void *, void *, unsigned int);
extern void FUN_02030b6c(void *, void *, unsigned int *, int);
extern void FUN_020403f0(void *);
extern void FUN_0208e2a4(void *);
extern void FUN_0208e63c(void *);
extern int FUN_02032c5c(void *, void *, void *);
extern int FUN_02032c80(void *, void *, void *);
extern int FUN_02031164(void *, void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_02030ae4(void *);
extern void *FUN_0208ded4(void *);
extern void *FUN_0208e2d0(void *);
extern void *FUN_0209c438(void *);

void FUN_02031014(char *self, unsigned int *input) {
    unsigned short angle;
    unsigned int position[3], counter, i, mask;
    char *entries;
    void *p;

    if (*(void **)(self + 40)) {
        angle = 0;
        if (*(int *)(self + 76)) {
            FUN_020403d0(*(void **)(self + 40), self + 60, *(unsigned short *)(self + 72), 0);
            *(int *)(self + 76) = 0;
        } else if (FUN_02032c5c(DAT_02108c64, position, &angle)) {
            FUN_020403d0(*(void **)(self + 40), position, angle, 1);
        }
        if (FUN_02032c80(DAT_02108c64, position, &angle)) {
            FUN_020405a8(*(void **)(self + 40), position, angle);
        }
    }
    if (input && input[0]) {
        *(unsigned int *)(self + 44) = input[0];
        counter = 0;
        mask = DAT_020ec288[FUN_02031164(self, input)];
        for (i = 0; i < *(unsigned int *)(self + 44); i++) {
            if (mask & (1u << i)) {
                entries = (char *)input[1];
                if (*(unsigned int *)(entries + 8 * i)) {
                    p = FUN_020ba894(8);
                    if (p) p = FUN_02030ae4(p);
                    *(void **)(self + 4 + 4 * i) = p;
                    if (p) FUN_02030b6c(p, entries + 8 * i, &counter, i == 5);
                }
            }
        }
    }
    if (*(void **)(self + 40)) {
        FUN_020403f0(*(void **)(self + 40));
    }
    p = FUN_020ba894(20);
    if (p) p = FUN_0208ded4(p);
    *(void **)(self + 28) = p;
    if (p) FUN_0208e2a4(p);
    p = FUN_020ba894(20);
    if (p) p = FUN_0208e2d0(p);
    *(void **)(self + 32) = p;
    if (p) FUN_0208e63c(p);
    p = FUN_020ba894(224);
    if (p) p = FUN_0209c438(p);
    *(void **)(self + 36) = p;
}
