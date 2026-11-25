// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9e, exact bytes and relocation targets.
// flags: -O4,s
int FUN_0208e6c4(int *param_1, int param_2, int param_3, int param_4) {
    int r4 = param_1[2];
    int r5;
    if (r4 <= 0) {
        return 0;
    }
    r5 = 0;
    switch (param_2) {
    case 1:
        if (param_1[1] < r4 - 1) {
            param_1[1]++;
            r5 = 1;
        } else if (param_3 != 0) {
            param_1[1] = 0;
            r5 = 1;
        }
        break;
    case 0:
        if (param_1[1] > 0) {
            param_1[1]--;
            r5 = 1;
        } else if (param_3 != 0) {
            param_1[1] = r4 - 1;
            r5 = 1;
        }
        break;
    case 2:
        if (param_4 > 0) {
            int v = param_1[1] - param_4;
            if (v >= 0) {
                param_1[1] = v;
                r5 = 1;
            } else {
                v += r4;
                if (v >= 0 && param_3 != 0) {
                    param_1[1] = v;
                    r5 = 1;
                }
            }
        }
        break;
    case 3:
        if (param_4 > 0) {
            int v = param_1[1] + param_4;
            if (v < r4) {
                param_1[1] = v;
                r5 = 1;
            } else if (v < r4 * 2 && param_3 != 0) {
                param_1[1] = v - r4;
                r5 = 1;
            }
        }
        break;
    }
    return r5;
}
