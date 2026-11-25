// flags: -O4,s -noThumb
typedef struct { unsigned int a, b; } Pair;
extern unsigned char DAT_0211253c[];
void FUN_0205a504(Pair *out, unsigned int *s) {
    Pair p; unsigned int b = s[6]; p.a = (unsigned int)DAT_0211253c; p.b = b; *out = p;
}
