// flags: -O4,p
#pragma thumb off
extern int FUN_0202e358(void);
extern int FUN_0202d8f8(int *, void *);
#pragma thumb on
extern unsigned char *FUN_020dac74(int);
extern int FUN_020db958(int);
extern void FUN_020dad18(int);
extern void FUN_020db2a0(void);
int FUN_020dc2c8(void) {
    int r4 = FUN_0202e358();
    unsigned char *p = FUN_020dac74(0x10);
    if (r4 == 1) {
        int buf[4];
        int res;
        buf[0] = p[0xd0a];
        buf[1] = 0;
        buf[2] = 0;
        buf[3] = 0;
        FUN_020db958(0);
        res = FUN_0202d8f8(buf, (void *)FUN_020db2a0);
        if (res == 1 || res >= 4) {
            FUN_020dad18(1);
            return 0x11;
        }
        goto ret2;
    }
    return 1;
ret2:
    return 2;
}
