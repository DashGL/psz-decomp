// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char a, b, c, d; } Key;
extern void FUN_02039534(void *, void *);
int FUN_0209576c(char *s, void *out) {
    int sum = 0, i;
    Key key;
    unsigned int value;
    for (i = 0; i < 3; i++) sum += *(int *)(s + 420 + 4 * i);
    key = *(Key *)(s + 416);
    value = ((unsigned int)key.a << 24) | ((unsigned int)key.b << 16) | ((unsigned int)key.c << 8) | key.d;
    int b = (value == 0xffffffffu) ? E1 : E0; int c = (b && (sum == 0)) ? E1 : E0; if (!c) {
        FUN_02039534(out, s + 416);
        return 1;
    }
    return 0;
}
