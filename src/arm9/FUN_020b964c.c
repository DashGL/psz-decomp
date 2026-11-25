// flags: -O4,s
typedef struct {
    unsigned short base[4];
    unsigned short th6[6];
    unsigned short mul6[6];
    unsigned short th10[10];
    unsigned short mul10[10];
    unsigned char pad[57];
    unsigned char rate;
} ExpData;
extern int FUN_0203beb4(void *);
extern int FUN_0203b41c(void *);
extern int FUN_0208a094(void *);
extern int FUN_02085438(void);
extern ExpData *FUN_0209554c(void *);
void FUN_020b964c(char *s, int numerator, int denominator, int mode) {
    ExpData *data;
    int value, level, i, amount;
    if (!FUN_0203beb4(s))
        return;
    if (FUN_0203b41c(s))
        return;
    if (FUN_0208a094(s + 416) < 10)
        return;
    data = FUN_0209554c(s);
    if (!data)
        return;
    value = 1000 * numerator / denominator;
    level = FUN_02085438() - 1;
    if (level < 0 || level >= 4)
        return;
    if (mode == 1) {
        for (i = 0; i < 10; i++) {
            if (data->th10[i] > value || i == 10) {
                amount = data->mul10[i] * data->base[level] * data->rate / 1000;
                *(short *)(s + 340) = *(short *)(s + 340) + amount;
                break;
            }
        }
    } else {
        for (i = 0; i < 6; i++) {
            if (data->th6[i] > value || i == 5) {
                amount = data->mul6[i] * data->base[level] * data->rate / 1000;
                *(short *)(s + 340) = *(short *)(s + 340) + amount;
                break;
            }
        }
    }
    if (*(short *)(s + 340) > 10000)
        *(short *)(s + 340) = 10000;
}
