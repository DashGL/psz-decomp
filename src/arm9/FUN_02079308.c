// flags: -O4,s
extern int DAT_0211a42c;
extern void FUN_020c2d94(int, int, int);
extern void *FUN_0200d16c(void);
extern void FUN_0200d3a4(void *, int, int);
void FUN_02079308(int a) {
    int v;
    if (a == 1) FUN_020c2d94(0, 2, 1);
    v = 0;
    if (DAT_0211a42c != -1) v = 12;
    FUN_0200d3a4(FUN_0200d16c(), v, 1);
}
