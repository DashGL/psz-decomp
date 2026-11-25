// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_02050b9c(void *, unsigned int, unsigned short);
extern void FUN_02037bb4(void *, unsigned short);
unsigned short FUN_02037bd0(unsigned char *s, unsigned int id) {
    unsigned int i;
    for (i = 0; i < *(unsigned short *)(s + 16); i++) {
        unsigned char *p = *(unsigned char **)(s + 12) + 16 * i;
        if (((*(unsigned int *)(p + 4) == id) ? E1 : E0) == E1) {
            p[12]++;
            return (unsigned short)i;
        }
    }
    for (i = 0; i < *(unsigned short *)(s + 20); i++) {
        unsigned char *p = *(unsigned char **)(s + 12) + 16 * i;
        if (((*(unsigned int *)(p + 4) != 0) ? E1 : E0) == E0) {
            if (FUN_02050b9c(p, id, (unsigned short)i) == 1) {
                FUN_02037bb4(s, (unsigned short)i);
                return (unsigned short)i;
            }
            return 65535;
        }
    }
    return 65535;
}
