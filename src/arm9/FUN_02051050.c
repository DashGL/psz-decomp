// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *DAT_02108c64;
extern int FUN_020510dc(void *);
extern void FUN_020510f4(void *);

void FUN_02051050(char *s) {
    if ((((*(signed char *)(DAT_02108c64 + 20) == 1) ? E1 : E0) != 0)) {
        char *header = *(char **)s + 8 * *(unsigned int *)(s + 76);
        int count = *(signed char *)(header + 2);
        int i;
        for (i = 0; i < count; i++) {
            char *p = *(char **)(s + 8) + 12 * (*(short *)header + i);
            int n = *(signed char *)(p + 1);
            int j;
            for (j = 0; j < n; j++) {
                char *entry = *(char **)(s + 16) + 8 * (*(short *)(p + 2) + j);
                int kind = *(signed char *)entry;
                if ((kind == 61 || kind == 62 || kind == 66) && FUN_020510dc(entry)) {
                    FUN_020510f4(s);
                    return;
                }
            }
        }
    }
}
