// flags: -O4,s
extern void FUN_020c2b84(void *, void *, int, int, int);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *, void *, void *, int);
extern signed char DAT_0211a208[2];
extern void *DAT_021238d8[3];
void FUN_overlay_11__02121aec(int *p) {
    void *resource, *shared;
    unsigned int bits = (*(volatile unsigned int *)0x04001000 & 0x1f00) >> 8;
    *(volatile unsigned int *)0x04001000 = (*(volatile unsigned int *)0x04001000 & 0xffffe0ff) | ((bits | 8) << 8);
    *(volatile unsigned short *)0x0400100e = (*(volatile unsigned short *)0x0400100e & 0x43) | 0x490;
    resource = DAT_021238d8[2];
    if (DAT_0211a208[1] == 1) resource = DAT_021238d8[0];
    FUN_020c2b84(p + 1, resource, 7, 4, 4);
    if (p[17] == -1) {
        shared = DAT_021238d8[1];
        p[17] = FUN_020c2438(FUN_020c1fc8(), shared, shared, 2);
    }
}
