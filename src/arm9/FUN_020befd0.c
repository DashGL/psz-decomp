enum { E0 = 0, E1 = 1 };
extern void FUN_020bef98(void *, int, void *);
void FUN_020befd0(void *self, signed char *record) {
    int active = (record[0] != 0) ? E1 : E0;
    if ((!active ? E1 : E0) != E0) {
        record[0] = 1;
        FUN_020bef98(self, record[1], record);
    }
}
