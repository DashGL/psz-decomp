// flags: -O4,p
extern int FUN_0209c774(void *, int, int);
void FUN_0209e3cc(char *self) {
    char *p = *(char **)(self + 12);
    if (!FUN_0209c774(*(char **)(p + 4) + 120, **(int **)(p + 8), *(int *)(self + 4))) {
        *(int *)(*(char **)(self + 12) + 48) = 0;
        if (*(int *)(self + 4) == 11) {
            *(unsigned int *)(*(char **)(self + 12) + 80) |= 1;
        } else {
            *(unsigned int *)(*(char **)(self + 12) + 80) |= 2;
        }
    }
}
