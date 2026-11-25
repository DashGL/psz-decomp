//cpp
// flags: -O4,s
extern "C" {
extern void *FUN_020be450(void);
extern void FUN_020be490(void *, int);
extern void FUN_020be4b4(void *, int);
void FUN_020448d4(unsigned char *self, int arg) {
    int id = *(int *)self;
    int flag = (*(unsigned short *)(self + 0x1e) & 1) ? 1 : 0;
    if (!flag && arg != 0) {
        FUN_020be490(FUN_020be450(), id);
    } else {
        FUN_020be4b4(FUN_020be450(), id);
    }
}
}
