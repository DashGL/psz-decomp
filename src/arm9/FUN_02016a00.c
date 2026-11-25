// flags: -O4,s -noThumb
extern unsigned int *DAT_02105718;
void FUN_02016a00(void) {
    unsigned int *p = DAT_02105718;
    if (!(*(unsigned int **)p)[5]) {
        volatile unsigned int *io = (volatile unsigned int *)0x04000440;
        io[0] = 0;
        io[2] = 1;
        io[0] = 1;
    } else {
        p[4] = 0;
        DAT_02105718[11] = 0;
        DAT_02105718[10] = 0;
    }
    DAT_02105718 = 0;
}
