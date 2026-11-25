// flags: -O4,s
extern char DAT_020f5ae8[];
extern char DAT_020f5b00[];
int FUN_020b8070(void **out, int *count, int type, int category) {
    if (category >= 0 && category < 3) {
        if (!type) *out = DAT_020f5ae8 + 8 * category;
        else *out = DAT_020f5b00 + 12 * category;
        *count = (type == 0) ? 2 : 3;
        return 1;
    }
    return 0;
}
