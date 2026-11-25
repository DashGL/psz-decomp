// flags: -O4,s
extern unsigned int FUN_overlay_17__02123eec(void *);
extern int FUN_020c2d94(int, int, int);
extern void FUN_overlay_17__02123d58(void *, int);
void FUN_overlay_17__0212495c(void *p) {
    unsigned int val = FUN_overlay_17__02123eec(p);
    int mode = 2;
    if (val == 1) {
        mode = 1;
    }
    FUN_020c2d94(1, 1, mode);
    FUN_overlay_17__02123d58(p, 15);
}
