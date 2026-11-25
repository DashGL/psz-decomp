enum { E0 = 0, E1 = 1 };
extern signed char *FUN_020bee50(void *, int);
int FUN_020be4d8(void *self, int index) {
    signed char *p = FUN_020bee50(self, index);
    if (p) {
        if ((p[0] != 0 ? E1 : E0) != E0) {
            return 1;
        }
    }
    return 0;
}
