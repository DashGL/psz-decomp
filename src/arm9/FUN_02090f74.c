// flags: -O4,s
struct S21_vec { int x, y, z; };
extern char *DAT_02108c84;
extern int DAT_02108d04;
extern int DAT_020fc988;
extern void FUN_020345f0(struct S21_vec *, struct S21_vec *);
extern void FUN_020c1bd4(void *, struct S21_vec *, unsigned short, int, int, int);

void FUN_02090f74(short *param_1, int param_2, int param_3, int param_4) {
    struct S21_vec v_out1;
    struct S21_vec v_out2;
    struct S21_vec v_in;
    volatile int z;
    short out1[2];
    short out2[2];
    char *r2;
    param_1[0] = 0;
    param_1[1] = 0;
    r2 = DAT_02108c84;
    if (r2 != 0) {
        int mode = *(int *)(r2 + 0x64);
        char *r5 = *(char **)(r2 + mode * 4 + 0x40);
        if (r5 != 0) {
            int flag = DAT_02108d04;
            unsigned short r7 = *(unsigned short *)(r5 + 0x82);
            if (mode == 6 || flag == 0) {
                int t;
                v_in = *(struct S21_vec *)(r5 + 0x18);
                FUN_020345f0(&v_out1, &v_in);
                t = *(int *)(r5 + 0x7c) - 0x5000;
                FUN_020c1bd4(out1, &v_out1, r7, param_3, t, (z = t, param_4));
                param_1[0] = out1[0];
                param_1[1] = out1[1];
            } else {
                FUN_020345f0(&v_out2, (struct S21_vec *)(flag + 0xb4));
                FUN_020c1bd4(out2, &v_out2, r7, param_3, DAT_020fc988, param_4);
                param_1[0] = out2[0];
                param_1[1] = out2[1];
            }
        }
    }
}
