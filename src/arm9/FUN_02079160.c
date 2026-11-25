// flags: -O4,s
struct S12_req {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
    int f8;
    int fc;
};
extern int FUN_020792ec(int, int);
extern void FUN_02079238(int, short *, int, int);
extern void FUN_020144f0(void);
extern unsigned short FUN_020792a4(int, int, int);
extern void FUN_020c32b4(struct S12_req *, int);
extern void FUN_02014714(void);

void FUN_02079160(int param_1, int *param_2, unsigned short param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9) {
    int sp_c = param_6;
    int r7;
    short arr[10];
    struct S12_req req;
    int r4;
    int r5;
    if (param_6 == -1) {
        r7 = (param_3 >= 2) ? 8 : 7;
        sp_c = FUN_020792ec(param_1, param_3);
    } else {
        r7 = param_8;
    }
    FUN_02079238(param_1, arr, param_5, param_9);
    r4 = 0;
    FUN_020144f0();
    for (r5 = 10 - param_4; r5 < 10; r4++, r5++) {
        short val = arr[r5];
        if (val != -1) {
            req.f0 = 0;
            req.f2 = 0;
            req.f4 = 0;
            if (param_7 == -1) {
                req.f0 = FUN_020792a4(param_1, val, param_3);
            } else {
                req.f0 = param_7 + val;
            }
            req.f8 = param_2[0] + ((r4 * r7) << 12);
            req.fc = param_2[1];
            FUN_020c32b4(&req, sp_c);
        }
    }
    FUN_02014714();
}
