extern int DAT_0211a51c;
extern int FUN_02084bf8(void *);
extern void FUN_0203227c(void *, int, int, void *, int);
void FUN_02032250(void *s, void *arg) {
    int a, b;
    if (FUN_02084bf8(&DAT_0211a51c)) {
        a = 0;
        b = 0;
    } else {
        a = 1;
        b = 0;
    }
    FUN_0203227c(s, a, b, arg, 0);
}
