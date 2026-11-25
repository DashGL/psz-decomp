// flags: -O4,s
extern char *DAT_02108c64;
#pragma thumb off
extern unsigned long long FUN_0200a5ac(int, int);
#pragma thumb on
extern char *FUN_02031c74(void *);

void *FUN_020320c8(char *s, int mode) {
    char *global = DAT_02108c64;
    volatile unsigned int record[5];
    unsigned int v0 = *(unsigned int *)(global + 36);
    unsigned int v1 = *(unsigned int *)(global + 40);
    record[1] = v1;
    record[0] = v0;
    record[2] = *(unsigned int *)(global + 44);
    record[3] = *(unsigned int *)(global + 48);
    record[4] = *(unsigned int *)(global + 52);
    if (v0 == 8) {
        int id = *(signed char *)(global + 21);
        char *table;
        if (id <= 0) {
            return 0;
        }
        table = *(char **)(s + 76);
        if (table) {
            unsigned int q = (unsigned int)FUN_0200a5ac(id - 1, *(unsigned short *)(table + 6));
            return *(char **)table + 20 * q;
        }
        return 0;
    } else {
        char *p = FUN_02031c74(s);
        if (p) {
            if (mode == 0) return *(void **)(p + 44);
            if (mode == 1) return *(void **)(p + 44);
        }
        return 0;
    }
}
