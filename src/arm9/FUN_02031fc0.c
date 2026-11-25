// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern void FUN_0207f270(void *, void *);

void FUN_02031fc0(char *self, signed char *record) {
    if (((record[4] == 1) ? E1 : E0) != 0) {
        void *child = *(void **)(self + 36);
        if (child) {
            FUN_0207f270(child, record);
        }
    } else {
        void *child = *(void **)(self + 40);
        if (child) {
            FUN_0207f270(child, record);
        }
    }
}
