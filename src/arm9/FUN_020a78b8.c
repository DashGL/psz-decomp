// flags: -O4,s
extern int FUN_0208a094(void *);

int FUN_020a78b8(char *s) {
    int ret = 0;
    int next;
    int total = FUN_0208a094(s);
    int original = (*(int *)(s + 8) & 0xf00) >> 8;
    int a = (*(int *)(s + 4) & 0x01fc0000) >> 18;
    int b = (*(int *)(s + 4) & 0x0003f800) >> 11;
    int c = (*(int *)(s + 4) & 0x000007f0) >> 4;
    int d = (*(int *)(s + 8) & 0x7f000000) >> 24;
    next = original;

    if (total >= 60 && original % 3 == 0) {
        switch (original) {
            case 0:
                if ((a > b && a > c && a > d) || (c > a && c > b && c > d)) {
                    next = 1;
                } else if ((b > a && b > c && b > d) || (d > a && d > b && d > c)) {
                    next = 2;
                }
                break;
            case 3:
                if ((a > b && a > c && a > d) || (b > a && b > c && b > d)) {
                    next = 4;
                } else if ((c > a && c > b && c > d) || (d > a && d > b && d > c)) {
                    next = 5;
                }
                break;
            case 6:
                if ((a > b && a > c && a > d) || (d > a && d > b && d > c)) {
                    next = 7;
                } else if ((c > a && c > b && c > d) || (b > a && b > c && b > d)) {
                    next = 8;
                }
                break;
            case 9:
                if ((c > a && c > b && c > d) || (b > a && b > c && b > d)) {
                    next = 10;
                } else if ((a > b && a > c && a > d) || (d > a && d > b && d > c)) {
                    next = 11;
                }
                break;
            case 1:
            case 2:
            case 4:
            case 5:
            case 7:
            case 8:
            default:
                break;
        }
    }

    if (original != next) {
        *(unsigned int *)(s + 8) = (*(unsigned int *)(s + 8) & ~0xf00u) | ((unsigned int)next << 8);
        *(unsigned int *)(s + 8) &= ~0xe0u;
        ret = 1;
    }
    return ret;
}
