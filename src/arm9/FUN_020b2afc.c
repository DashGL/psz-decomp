// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern unsigned char *FUN_02083534(void *, unsigned int);
void FUN_020b2afc(void *unused, unsigned int *list, int tag) {
    unsigned int i, count;
    if (tag == -1) {
        return;
    }
    count = list[20];
    for (i = 0; i < count; i++) {
        unsigned char *p = FUN_02083534(list, i);
        if (p != 0) {
            unsigned char f = p[0];
            if (((f & 0x20) ? E1 : E0) != 0 &&
                ((f & 8) ? E1 : E0) == 0 &&
                p[5] == 0) {
                p[25] = tag;
                return;
            }
        }
    }
}
