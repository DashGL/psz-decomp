// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern int *FUN_02094190(void *, int);
int FUN_020941c0(void *s, int index) {
    int *p = FUN_02094190(s, index);
    int *left, *right;
    int a, b;
    if (!p) return 0;
    if (*p != 3) return 0;
    left = FUN_02094190(s, index - 1);
    right = FUN_02094190(s, index + 1);
    a = (left && *left == 3) ? E1 : E0;
    b = (right && *right == 3) ? E1 : E0;
    if (a) return 2;
    if (b) return 1;
    return 0;
}
