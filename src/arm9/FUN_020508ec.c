// flags: -O4,s
extern char *FUN_02050420(void *, unsigned int);
extern void *FUN_020504a4(void *, unsigned int);
enum { E0 = 0, E1 = 1 };

void *FUN_020508ec(char *s, signed char *p) {
    if ((p[0] == 1) ? E1 : E0) {
        int index = p[1];
        if (index >= 0 && index < 3) {
            if (index == 2) {
                char *r = FUN_02050420(s, (unsigned char)p[2]);
                return (s + 0x58) + 14 * (*(signed char *)(r + 0x20));
            }
            return FUN_020504a4(s + 24 * index, (unsigned char)p[2]);
        }
    }
    return 0;
}
