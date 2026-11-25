// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int *FUN_020728d4(void *, int);
extern void FUN_02072910(void *, void *);
void FUN_02072964(int *self, int a) {
    int i;
    for (i = 0; i < self[0]; i++) {
        int *p = FUN_020728d4(self, i);
        if (p[0] == a && ((*(short *)((char *)p + 8) & 1) ? E1 : E0) == 0) {
            FUN_02072910(self, p);
        }
    }
}
