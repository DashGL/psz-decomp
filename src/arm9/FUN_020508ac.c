// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *FUN_02050420(void *, unsigned int);
void *FUN_020508ac(char *s, signed char *p) {
    int valid = (p[0] == 1) ? E1 : E0;
    if (valid) {
        int index = p[1];
        if (index == 2) {
            return FUN_02050420(s, (unsigned char)p[2]);
        }
        if (index >= 0 && index < 3) {
            return FUN_02050420(s + 24 * index, (unsigned char)p[2]);
        }
        return 0;
    }
    return 0;
}
