// flags: -O4,p
extern int DAT_02156b38;
extern void FUN_overlay_11__02123084(void *), FUN_020b2330(void *, void *);
extern void *FUN_02093c00(int), *FUN_02093b2c(void *, int, int);
int FUN_overlay_11__02123590(char *s, char *out) {
    int res = 0;
    if (!*(int *)(s + 108)) {
        if (!*(int *)(s + 4)) {
            void *p;
            FUN_overlay_11__02123084(&DAT_02156b38);
            *(int *)(s + 104) = 0;
            p = FUN_02093c00(0);
            if (p) FUN_020b2330(s, FUN_02093b2c(p, 0, 0));
            res = 1;
            *(int *)(s + 108) = 1;
        } else {
            *(short *)out = *(short *)(s + 96);
            *(short *)(out + 2) = *(short *)(s + 98);
            *(int *)(out + 4) = *(int *)(s + 100);
            res = 1;
        }
    }
    return res;
}
