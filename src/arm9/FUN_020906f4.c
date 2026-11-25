// flags: -O4,s
typedef struct { int words[4]; } Item;
extern void *UNK_02108c64;
extern char UNK_0211a578[];
extern void FUN_02032dfc(void *, void *), FUN_0204e9c8(void *, int, int), FUN_0208da5c(void *, int, int);
extern int FUN_0206d36c(void *, int), FUN_0204ea84(void *, int);
int FUN_020906f4(char *s) {
    Item copy;
    int descriptor[5];
    Item item;
    if (s) {
        FUN_02032dfc(descriptor, UNK_02108c64);
        if (!FUN_0206d36c(descriptor, 0)) {
            FUN_0204e9c8(&item, 1, 1);
            copy = item;
            if (FUN_0204ea84(&copy, 1)) {
                FUN_0208da5c(UNK_0211a578, *(int *)(s + 252), 3);
                return 1;
            }
        }
    }
    return 0;
}
