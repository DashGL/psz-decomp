// flags: -O4,s
extern int FUN_0203b41c(void *), FUN_020be610(void *, int, void *), FUN_02034b8c(void *, int);
extern void *FUN_020be450(void);
extern void FUN_020bf680(void *, void *, int), FUN_020be5d4(void *, int, int, void *), FUN_02035408(void *, int, int, int), FUN_0208de5c(void *, int, void *, int);

void FUN_020abf78(char *s) {
    enum { E0 = 0, E1 = 1 };
    int delta[2], position[3];
    if (FUN_0203b41c(s)) return;
    *(int *)(s + 2888) = *(int *)(s + 180);
    *(int *)(s + 2892) = *(int *)(s + 188);
    FUN_020bf680(s + 2900, s + 2888, *(int *)(s + 2896));
    FUN_020be5d4(FUN_020be450(), *(int *)(s + 2988), 0, s + 2900);
    if (((unsigned)*(int *)(s + 576) < 12) ? E1 : E0) {
        if (FUN_020be610(FUN_020be450(), *(int *)(s + 2988), delta)) {
            FUN_02035408(position, *(int *)(s + 156) + delta[0], *(int *)(s + 160), *(int *)(s + 164) + delta[1]);
            if (FUN_02034b8c(position, 256)) {
                *(int *)(s + 156) += delta[0];
                *(int *)(s + 164) += delta[1];
                ++*(unsigned *)(s + 616);
                if (*(unsigned *)(s + 616) > 30) {
                    FUN_0208de5c(s + 588, *(int *)(s + 252), position, *(unsigned short *)(s + 192));
                    *(int *)(s + 616) = 0;
                }
            }
        }
    }
}
