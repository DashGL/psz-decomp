// flags: -noThumb
// near: big-int 16-bit limb addition; loop pointer/index register coloring (27 byte diffs)
extern int FUN_0202c918(unsigned short *, int);
extern void FUN_020656b8(void *, int, int);

void FUN_0202c970(unsigned short *param_1, unsigned short *param_2, unsigned short *param_3, int param_4) {
    int n1 = FUN_0202c918(param_2, param_4);
    int n2 = FUN_0202c918(param_3, param_4);
    int i;
    unsigned int carry;

    if (n1 < n2) {
        n1 = n2;
    }
    if (n1 != param_4) {
        n1++;
    }
    carry = 0;
    for (i = 0; i < n1; i++) {
        unsigned int sum = param_2[i] + param_3[i] + carry;
        param_1[i] = sum;
        carry = sum >> 16;
    }
    if (param_1 != param_2 && param_1 != param_3) {
        FUN_020656b8(param_1 + i, 0, (param_4 - i) << 1);
    }
}
