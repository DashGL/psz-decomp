// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern char *FUN_02086e3c(void);
extern int FUN_020b0410(void *, int, int);
int FUN_020b03bc(void *s, int index, int check, int arg) {
    if (check != 0) {
        char *p = FUN_02086e3c();
        int occ;
        if (index >= 0 && index < *(short *)(p + 12)) {
            occ = ((*(int **)(p + 8))[index] != 0) ? E1 : E0;
        } else {
            occ = 0;
        }
        if (occ != 0) {
            return -1;
        }
    }
    return FUN_020b0410(s, index, arg) != -1;
}
