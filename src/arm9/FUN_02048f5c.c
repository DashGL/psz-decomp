// flags: -O4,p
typedef union { unsigned int w[25]; unsigned short h[50]; } Record;
extern void FUN_02046d00(Record *, void *);
extern void FUN_020472cc(Record *, int);
extern void FUN_020456bc(Record *, int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_02048fb4(void *);
extern void FUN_02049098(void *, Record *, int);
void *FUN_02048f5c(char *s) {
    Record r;
    void *p;
    FUN_02046d00(&r, s);
    FUN_020472cc(&r, r.w[21]);
    FUN_020456bc(&r, *(int *)(s + 84));
    p = 0;
    if (r.h[0] != 65535) {
        r.w[16] = 8;
        p = FUN_020ba894(284);
        if (p) p = FUN_02048fb4(p);
        if (p) FUN_02049098(p, &r, 0);
    }
    return p;
}
