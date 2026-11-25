// flags: -O4,s
extern int FUN_02003a78(void);
struct S10 {
    char pad[0x74];
    signed char f74[8];
};
void FUN_020d94e4(struct S10 *param_1) {
    int i;
    int r5;
    param_1->f74[0] = FUN_02003a78() % 0x5d + 0x21;
    r5 = 0;
    for (i = 1; i < 8; i++) {
        r5 = (((param_1->f74[0] & 1) ^ (r5 ^ ((i ^ param_1->f74[i - 1]) & 1))) ^ ((param_1->f74[0] < 0x4f) ? 1 : 0)) ^ ((param_1->f74[i - 1] < param_1->f74[0]) ? 1 : 0);
        param_1->f74[i] = FUN_02003a78() % 0x5d + 0x21;
        if ((r5 != 0 && (param_1->f74[i] & 1) == 0) || (r5 == 0 && (param_1->f74[i] & 1) == 1)) {
            param_1->f74[i]++;
        }
    }
}
