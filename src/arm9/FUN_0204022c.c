// flags: -O4,s
extern void *DAT_02108c64;
extern void FUN_020402a4(void *);
extern void FUN_02032dfc(void *, void *);
extern int FUN_0206d428(void *);
extern int FUN_0206d45c(void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020c133c(void *, int);
void FUN_0204022c(char *s) {
    unsigned int record[5];
    int amount;
    FUN_020402a4(s);
    FUN_02032dfc(record, DAT_02108c64);
    amount = 0;
    if (FUN_0206d428(record)) {
        if (FUN_0206d45c(record)) amount = 0x7a800;
        else amount = 0x5dc00;
    }
    if (amount) {
        void *p = FUN_020ba894(32);
        if (p) p = FUN_020c133c(p, amount);
        *(void **)(s + 20) = p;
    }
}
