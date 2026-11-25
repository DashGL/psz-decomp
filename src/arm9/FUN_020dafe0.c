// flags: -O2,p
typedef struct {
    char pad[10];
    unsigned short fa;
    char fc[4];
} S_dafe0;
extern int FUN_020daf6c(S_dafe0 *);
extern int FUN_02003f38(const void *, const void *, int);
int FUN_020dafe0(S_dafe0 *a, int b, unsigned char *c) {
    int i;
    if (a->fa == 0x20) {
        int res = FUN_020daf6c(a);
        if (res > 0) {
            return res;
        }
    }
    i = 0;
    if (b > 0) {
        unsigned short len = a->fa;
        char *fc = a->fc;
        do {
            if ((unsigned char)len == c[3] && FUN_02003f38(fc, c + 4, len) == 0) {
                return c[1];
            }
            i++;
            c += 0x24;
        } while (i < b);
    }
    return -1;
}
