// flags: -O4,s
typedef struct { unsigned char a, b, c, d; } Key;
typedef struct { int x, y, z; } V;
extern void *UNK_02108c64;
extern char UNK_0211a588[], UNK_0211a58c[], UNK_0211a578[];
extern void FUN_02032dfc(void *, void *), FUN_0204e994(void *, int, int), FUN_0208d784(void *, int, void *, int);
extern int FUN_0206d36c(void *, int), FUN_0204ec80(int, int), FUN_0204ea84(void *, int);
int FUN_02090538(char *s) {
    int d[5], item[4], id;
    if (s) {
        FUN_02032dfc(d, UNK_02108c64);
        if (!FUN_0206d36c(d, 0)) {
            id = *(int *)(s + 252);
            if (FUN_0204ec80(id, 9)) {
                FUN_0204e994(item, 9, 1);
                *(Key *)UNK_0211a588 = *(Key *)item;
                *(V *)UNK_0211a58c = *(V *)(item + 1);
                if (FUN_0204ea84(UNK_0211a588, 1)) {
                    *(unsigned int *)(s + 248) |= 0x100000;
                    FUN_0208d784(UNK_0211a578, id, UNK_0211a588, 1);
                    return 1;
                }
            }
        }
    }
    return 0;
}
