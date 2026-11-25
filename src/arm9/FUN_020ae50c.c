// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -O4,s
int FUN_020ae50c(unsigned short *param_1, unsigned int param_2, int param_3, unsigned short param_4) {
    int pow10 = 1;
    unsigned int i = 0;
    for (; i < param_2; i++) {
        pow10 = 10 * pow10;
    }
    if (param_1 != 0) {
        int rem = param_3;
        int out_idx;
        unsigned int j;
        unsigned int k;
        if (rem < 0) {
            rem = 0;
        } else if (rem >= pow10) {
            rem = pow10 - 1;
        }
        out_idx = 0;
        for (j = 0; j < param_2; j++) {
            int digit;
            pow10 /= 10;
            digit = rem / pow10;
            rem -= digit * pow10;
            if ((unsigned int)param_3 >= (unsigned int)pow10) {
                param_1[out_idx] = (unsigned short)(digit + 0x30);
                out_idx++;
            } else if (param_4 != 0) {
                param_1[out_idx] = param_4;
                out_idx++;
            }
        }
        for (k = out_idx; k < param_2; k++) {
            param_1[k] = 0;
        }
        return out_idx;
    }
    return -1;
}
