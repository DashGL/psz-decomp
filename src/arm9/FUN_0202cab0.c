// flags: -O4,p -noThumb
extern int FUN_0202c918(unsigned short *, int);
extern void FUN_020656b8(void *, int, int);

void FUN_0202cab0(unsigned short *param_1, unsigned short *param_2, unsigned short *param_3, int param_4) {
    int len1 = FUN_0202c918(param_2, param_4);
    int len2 = FUN_0202c918(param_3, param_4);
    int i;
    int borrow;
    if (len1 < len2) {
        len1 = len2;
    }
    if (len1 != param_4) {
        len1++;
    }
    borrow = 0;
    i = 0;
    while (i < len1 || (i < param_4 && borrow != 0)) {
        int d = borrow + (param_2[i] - param_3[i]);
        param_1[i] = (unsigned short)d;
        borrow = d >> 16;
        i++;
    }
    if (param_1 != param_2 && param_1 != param_3) {
        FUN_020656b8(param_1 + i, 0, (param_4 - i) << 1);
    }
}
