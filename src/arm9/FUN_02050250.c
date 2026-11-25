// flags: -O4,s
extern void *FUN_020ba8a0(unsigned int);
extern unsigned int FUN_020504bc(void *, unsigned int);
extern unsigned int FUN_020504d4(void *, unsigned int);
extern unsigned int FUN_02037adc(void *, unsigned int, int);
extern unsigned int FUN_02037bd0(void *, unsigned int);
extern void FUN_02033f30(void *, unsigned int, unsigned int);
extern unsigned int FUN_02037c88(void *, unsigned int, int, int);
extern void *DAT_02108c84;

void FUN_02050250(char *s) {
    unsigned int count, i;
    void *m;
    unsigned short *out;
    unsigned int j;
    unsigned char *record;

    if (!*(void **)(s + 8)) return;
    m = DAT_02108c84;
    if (!m) return;
    count = *(unsigned int *)(*(char **)(s + 8) + 4);
    *(unsigned int *)(s + 20) = count;
    if (!count) return;
    *(void **)(s + 16) = FUN_020ba8a0(count * 14);
    out = *(unsigned short **)(s + 16);
    if (!out) return;
    record = **(unsigned char ***)(s + 8);
    for (i = 0; i < count; i++, out += 7) {
        for (j = 0; j < 2; j++) {
            unsigned int resource = FUN_020504bc(s, record[24 + j]);
            if (resource)
                out[j] = FUN_02037adc(m, resource, 0);
            else
                out[j] = 65535;
        }
        for (j = 0; j < 2; j++) {
            unsigned int resource = FUN_020504d4(s, record[26 + j]);
            if (resource) {
                out[j + 2] = FUN_02037bd0(m, resource);
                FUN_02033f30(m, out[j], out[j + 2]);
            } else {
                out[j + 2] = 65535;
            }
        }
        for (j = 0; j < 3; j++) {
            unsigned int resource = FUN_020504bc(s, record[28 + j]);
            if (resource) {
                if (record[33] & 1)
                    out[j + 4] = FUN_02037c88(m, resource, 4, 0);
                else if (record[33] & 2)
                    out[j + 4] = FUN_02037c88(m, resource, 0, 0);
            } else {
                out[j + 4] = 65535;
            }
        }
        record += 36;
    }
}
