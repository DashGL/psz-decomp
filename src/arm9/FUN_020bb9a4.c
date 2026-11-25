// flags: -O4,p
extern unsigned char DAT_0211b2c0[];
extern void FUN_020bb03c(int);
void FUN_020bb9a4(unsigned short *desc) {
    void (*callback)(void *);
    *(int *)(DAT_0211b2c0 + 0x34) = 1;
    if (desc[1] == 0) FUN_020bb03c(1);
    else FUN_020bb03c(0);
    callback = *(void (**)(void *))(DAT_0211b2c0 + 0x48);
    if (callback) callback(desc);
}
