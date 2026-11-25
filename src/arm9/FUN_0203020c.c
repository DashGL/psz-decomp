// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int a, b, c; } Triple;
extern void *FUN_02030d74(void *, void *);
extern void FUN_020302dc(void *);
extern void *FUN_020302e8(Triple *, void *);
extern unsigned char *FUN_02034a70(int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_02034700(void *);
extern void *FUN_02044904(void *, void *, unsigned int);
extern void *FUN_02044858(void *, void *, unsigned int);
extern void *DAT_020f6bfc;

void *FUN_0203020c(char *s, void *arg, int kind) {
    Triple v;
    unsigned char *record;
    void *p;
    FUN_02030d74(s, arg);
    *(void **)s = &DAT_020f6bfc;
    *(void **)(s + 12) = 0;
    *(void **)(s + 16) = 0;
    *(void **)(s + 20) = 0;
    FUN_020302dc(s + 24);
    FUN_020302e8(&v, s);
    *(Triple *)(s + 28) = v;
    *(int *)(s + 40) = kind;
    *(unsigned short *)(s + 44) = *(unsigned short *)(*(char **)(s + 4) + 16);
    ((unsigned char *)s)[46] = 255;
    s[47] = 0;
    record = FUN_02034a70(*(int *)(s + 40));
    if ((record[7] & 4) ? E1 : E0) {
        p = FUN_020ba894(12);
        if (p) p = FUN_02034700(p);
        *(void **)(s + 12) = p;
    }
    if ((record[7] & 1) ? E1 : E0) {
        p = FUN_020ba894(36);
        if (p) p = FUN_02044904(p, s + 28, *(unsigned short *)(s + 44));
        *(void **)(s + 16) = p;
    }
    if ((record[7] & 2) ? E1 : E0) {
        p = FUN_020ba894(32);
        if (p) p = FUN_02044858(p, s + 28, *(unsigned short *)(s + 44));
        *(void **)(s + 20) = p;
    }
    return s;
}
