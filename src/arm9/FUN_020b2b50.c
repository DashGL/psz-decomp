// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern unsigned char *FUN_02083534(void *, unsigned int);
extern void FUN_020b2ba4(void *, void *);
void FUN_020b2b50(void *s, unsigned int *list) {
    unsigned int count = list[20];
    unsigned int i;
    for (i = 0; i < count; i++) {
        unsigned char *p = FUN_02083534(list, i);
        if (p != 0) {
            unsigned char f = p[0];
            if (((f & 0x20) ? E1 : E0) != 0 &&
                ((f & 8) ? E1 : E0) == 0 &&
                *(signed char *)(p + 0x19) == -1) {
                FUN_020b2ba4(s, p);
            }
        }
    }
}
