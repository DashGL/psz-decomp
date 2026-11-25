// flags: -O4,p
typedef struct { short type, id; int data; } Event;
extern struct { unsigned char a, b; } DAT_0211a208;
extern int FUN_020b2298(void *, void *), FUN_020872c4(void *);
extern void *FUN_02086e3c(void), *FUN_02093c00(int), *FUN_02093b2c(void *, int, int);
extern void FUN_020b2330(void *, void *);
int FUN_overlay_11__021235e4(int *s, Event *e) {
    int result = 0;
    if (s[27] == 0) result = FUN_020b2298(s, e);
    else if (s[27] == 1) {
        if (!FUN_020872c4(FUN_02086e3c())) {
            void *m = FUN_02093c00(0);
            if (m) FUN_020b2330(s, FUN_02093b2c(m, 0, 1));
            e->type = 12;
            e->id = 3;
            DAT_0211a208.a = 2;
            s[27] = 2;
            result = 1;
            DAT_0211a208.b = 0;
        }
    }
    return result;
}
