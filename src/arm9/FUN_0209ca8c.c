// flags: -O4,s
extern void *DAT_0211a620;
extern char DAT_020fb4d4[];
extern char DAT_020fb4dc[];
extern int FUN_0209ca50(char *, unsigned char *);
extern int FUN_0209e238(void *, char *, int, int, int);
extern int FUN_020c3ec4(char *, char *, int);
extern int FUN_020c3f90(char *, int, char *, ...);
extern void FUN_0209cb80(char *, int);

int FUN_0209ca8c(char *out, unsigned char *item) {
    char name[21];
    char number[3];
    char other[3];
    int v;

    if (DAT_0211a620 == 0) {
        return 0;
    }

    if (FUN_0209ca50(name, item)) {
        out[0] = 0;
        switch (item[0]) {
        case 0:
            if (item[1] == 17) {
                break;
            }
            v = (*(int *)(item + 8) & 0x3e000) >> 13;
            if (item[3] != 3 && v > 0) {
                FUN_0209e238(DAT_0211a620, out, 21, 88, v - 1);
            }
            /* fallthrough */
        case 1:
            FUN_020c3ec4(out, name, 27);
            v = ((*(int *)(item + 4) & (int)0xfe000000) >> 25) & 0x7f;
            if (v > 0 && v <= 99) {
                char *fmt = (char *)(volatile unsigned int)DAT_020fb4d4;
                FUN_0209cb80(number, v);
                FUN_020c3f90(out, 27, fmt, out, number);
            }
            return 1;
        case 3:
            if (item[1] != 1) {
                break;
            }
            v = (*(int *)(item + 4) & 0x3fc000) >> 14;
            char *fmt = (char *)(volatile unsigned int)DAT_020fb4dc;
            FUN_0209cb80(other, v);
            FUN_020c3f90(out, 27, fmt, name, other);
            return 1;
        }
        FUN_020c3ec4(out, name, 27);
        return 1;
    }
    return 0;
}
