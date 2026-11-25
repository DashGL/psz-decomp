// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x92, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_0209c864(void *, int, void *);
extern int FUN_0209c7a4(void *, int, void *);
extern int FUN_0209c888(void *, int, int, void *);

int FUN_0209c8c0(void *param_1, int *param_2, int param_3, int param_4, int param_5,
                 unsigned char *param_6, short *param_7, short param_8, int param_9, int param_10) {
    int d = param_8;
    int i;
    for (i = 0; i < param_5; i++) {
        unsigned char *elem = param_6 + i * 0xc;
        if ((elem[0] & param_9) != 0 &&
            FUN_0209c864(param_1, param_10, elem) != 0 &&
            d - param_7[i] > *(short *)(elem + 6)) {
            int v = FUN_0209c7a4(param_1, param_3, elem);
            if (v != -1) {
                *param_2 = FUN_0209c888(param_1, v, param_4, elem);
                if (*param_2 != -1) {
                    break;
                }
            }
        }
    }
    return i;
}
