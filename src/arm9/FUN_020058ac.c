// flags: -O4,p -noThumb
struct S {
    int a;
    unsigned int b0:7, b7:3, b10:2, rest:20;
};
int FUN_020058ac(struct S *s, int mode) {
    int result;
    if (s == 0 || s->b7 == 0) {
        return 0;
    }
    switch (s->b10) {
    case 0:
        if (mode > 0) {
            s->b10 = 2;
        } else if (mode < 0) {
            s->b10 = 1;
        }
        result = mode;
        break;
    case 1:
        result = -1;
        break;
    case 2:
        result = 1;
        break;
    }
    return result;
}
