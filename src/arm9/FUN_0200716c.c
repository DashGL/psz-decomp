// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02006e8c(void *, unsigned char);

struct Dec {
    char sign;
    short exp;
    unsigned char len;
    unsigned char digits[32];
};

void FUN_0200716c(struct Dec *param_1, signed char *param_2, short param_3) {
    int i;
    signed char c;

    param_1->exp = param_3;
    i = 0;
    param_1->sign = 0;
    while (i < 0x20 && *param_2 != 0) {
        c = *param_2++;
        param_1->digits[i] = c - '0';
        i++;
    }
    param_1->len = i;
    c = *param_2;
    if (c == 0) {
        return;
    }
    if (c < 5) {
        return;
    }
    if (c <= 5) {
        c = param_2[1];
        param_2++;
        if (c != 0) {
            do {
                if (c != '0') {
                    goto round_up;
                }
                c = *++param_2;
            } while (c != 0);
        }
        if ((param_1->digits[i - 1] & 1) == 0) {
            return;
        }
    }
round_up:
    FUN_02006e8c(param_1, param_1->len);
}
