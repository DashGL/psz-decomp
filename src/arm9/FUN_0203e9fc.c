// flags: -O4,s
extern void *DAT_02108c84;
extern void FUN_02037d20(void *, unsigned int);
extern void FUN_02037c5c(void *, unsigned int);
extern void FUN_02037b88(void *, unsigned int);
void FUN_0203e9fc(char *s) {
    void *m = DAT_02108c84;
    int i, j;
    if (m) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 22; j++) {
                FUN_02037d20(m, *(unsigned short *)(s + 48 * i + 2 * j + 876));
                *(unsigned short *)(s + 48 * i + 2 * j + 876) = 65535;
            }
        }
        for (i = 0; i < 4; i++) {
            FUN_02037c5c(m, *(unsigned short *)(s + 48 * i + 874));
            *(unsigned short *)(s + 48 * i + 874) = 65535;
        }
        for (i = 0; i < 4; i++) {
            FUN_02037b88(m, *(unsigned short *)(s + 48 * i + 872));
            *(unsigned short *)(s + 48 * i + 872) = 65535;
        }
    }
}
