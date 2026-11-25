// flags: -O4,s
typedef struct { unsigned char b[4]; } Record;
typedef struct { unsigned int a; unsigned int b; } Ent8;
extern Ent8 DAT_0210c390[][27];
extern int FUN_0203a820(void *, int);
extern int FUN_02046660(void *, void *);
extern unsigned int FUN_02045e30(int, unsigned int, int);

static inline int check_type(int type) {
    int ok = 0;
    if (type >= 8 && type <= 13) ok = 1;
    return ok;
}

unsigned int FUN_0204630c(void *s, Record *src) {
    unsigned int result = 0;
    Ent8 *p = 0;
    Record a = *src;
    int type = a.b[1];
    if (FUN_0203a820(&a, 0)) {
        enum { E0 = 0, E1 = 1 } ok = E0;
        if (type >= 8 && type <= 13) ok = E1;
        if (ok) {
            Record b = *src;
            int value = FUN_02046660(s, &b);
            unsigned int index = FUN_02045e30(type, a.b[3], value);
            p = &DAT_0210c390[type - 1][index];
        }
    }
    if (p) result = (p->b << 2) >> 22;
    return result;
}
