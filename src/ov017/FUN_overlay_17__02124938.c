// flags: -O4,s
extern int FUN_overlay_17__02123eec(void *);
extern void FUN_020c2d94(int, int, int);
extern void FUN_overlay_17__02123d58(void *, int);
void FUN_overlay_17__02124938(void *self) {
    int r = FUN_overlay_17__02123eec(self);
    int arg = 2;
    if (r == 1) arg = 1;
    FUN_020c2d94(0, 2, arg);
    FUN_overlay_17__02123d58(self, 15);
}
