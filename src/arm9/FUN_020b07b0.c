// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void FUN_0203955c(void *);
extern char DAT_0211aa44[];
void *FUN_020b07b0(char *self) {
    int count;
    int i;
    for (i = 0, count = *(short *)(self + 12); i < count; i++) {
        if ((((*(unsigned int **)(self + 8))[i] & 1) ? E1 : E0) != 0) {
            return *(char **)(self + 4) + 16 * i;
        }
    }
    FUN_0203955c(DAT_0211aa44);
    return DAT_0211aa44;
}
