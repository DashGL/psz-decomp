// flags: -O4,p -noThumb
extern int FUN_02003e24(int, int);

int *FUN_02028b7c(char *a, int b) {
    int i = 0;
    int **arr;
    int n = *(int *)(a + 0x818);
    if (n > 0) {
        arr = *(int ***)(a + 0x814);
        do {
            int *p = arr[i];
            if (FUN_02003e24(*p, b) == 0) {
                return p;
            }
            i++;
        } while (i < n);
    }
    return 0;
}
