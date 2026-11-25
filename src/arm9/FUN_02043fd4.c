// flags: -O4,s
enum { E0 = 0, E1 = 1 };
void FUN_02043fd4(char *s) {
    int i;
    *(unsigned int *)(s + 0x94) |= 1;
    for (i = 0; i < *(int *)(s + 0x9c); i++) {
        char *p = *(char **)(s + 0x98) + 112 * i;
        if (((*(short *)(p + 0x46) & 1) ? E1 : E0) != 0) {
            char *object = *(char **)p;
            *(unsigned int *)(object + 24) |= 1;
        }
    }
}
