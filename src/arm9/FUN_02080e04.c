// flags: -O4,p
extern int FUN_02080e34(int, int, void *);
extern void FUN_020a524c(void *, unsigned char, unsigned char);
void FUN_02080e04(char *self) {
    int index = *(signed char *)(self + 1);
    char *buf;
    if (index < 0) index = 0;
    buf = self + 8;
    if (FUN_02080e34(index, (unsigned char)self[6], buf))
        FUN_020a524c(buf, (unsigned char)index, (unsigned char)self[6]);
}
