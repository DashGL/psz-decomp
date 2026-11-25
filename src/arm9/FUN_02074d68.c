// flags: -O4,s
extern int DAT_020f2740[][3];
extern void *FUN_020ba894(unsigned int), *FUN_020c3490(void *);
extern void FUN_020c34d8(void *, int);
void FUN_02074d68(void **out, int row, int column) {
    int id = DAT_020f2740[row][column];
    if (id != -1) {
        void *p = FUN_020ba894(128);
        if (p) p = FUN_020c3490(p);
        *out = p;
        FUN_020c34d8(p, id);
    }
}
