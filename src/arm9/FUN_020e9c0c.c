// flags: -O4,p
extern int FUN_020e15cc(int);
extern int FUN_020e969c(void);
extern int FUN_020d3600(int, int, int, int);
extern int FUN_020e9730(int, int, int);
extern void FUN_020e056c(int, int);
void FUN_020e9c0c(int a, int b, int c, int d) {
    int r7 = FUN_020e15cc(a);
    if (d != 0) {
        if (FUN_020e969c() != 0) {
            if (FUN_020d3600(r7, b, c, d) == 0) {
                return;
            }
        }
        if (FUN_020e9730(r7, b, c) == 0) {
            FUN_020e056c(6, -0x17d5e);
        }
    } else {
        FUN_020d3600(r7, b, c, d);
    }
}
