// flags: -O4,s
typedef struct { unsigned int a, b, c, d; } Desc;
extern char *DAT_02108d04;
extern void FUN_0204e994(void *, int, int);
extern void FUN_0204ee04(void *, void *);
void FUN_020a9644(int enabled) {
    char *p = DAT_02108d04;
    if (p) {
        void *owner = *(void **)(p + 252);
        Desc b, a;
        int mode = 3;
        if (!enabled)
            mode = 4;
        FUN_0204e994(&a, mode, 1);
        b = a;
        FUN_0204ee04(owner, &b);
    }
}
