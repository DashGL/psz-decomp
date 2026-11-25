// flags: -O4,s
extern void *DAT_0210e240;
extern void FUN_02050938(void *, void *, void *);

typedef struct {
    signed char a;
    signed char b;
    unsigned char c;
    unsigned char pad;
} Rec;

enum { E0 = 0, E1 = 1 };

void *FUN_020304f8(char *s) {
    if ((*(signed char *)(s + 0x18) == 0) ? E1 : E0) {
        void *m = DAT_0210e240;
        void *p = *(void **)(s + 4);
        if (m) {
            Rec v;
            FUN_02050938(&v, m, p);
            s[0x18] = v.a;
            s[0x19] = v.b;
            s[0x1a] = v.c;
        }
    }
    return s + 0x18;
}
