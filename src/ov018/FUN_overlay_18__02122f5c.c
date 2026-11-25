// flags: -O4,s
extern void FUN_020a45a4(unsigned int);
extern void FUN_020c2b84(void *, void *, int, int, int);
extern void *DAT_02123990[];
extern signed char DAT_0211a208[];
void FUN_overlay_18__02122f5c(unsigned char *self, int alternate) {
    void *resource;
    *(volatile unsigned short *)0x04000008 = *(volatile unsigned short *)0x04000008 & ~3;
    FUN_020a45a4(1);
    FUN_020a45a4(8);
    *(volatile unsigned short *)0x0400000e = (*(volatile unsigned short *)0x0400000e & 0x43) | 0x84;
    if (!alternate) {
        resource = DAT_02123990[1];
        if (DAT_0211a208[1] == 1) {
            resource = DAT_02123990[3];
        }
        FUN_020c2b84(self + 4, resource, 3, 0, 1);
    } else {
        resource = DAT_02123990[2];
        if (DAT_0211a208[1] == 1) {
            resource = DAT_02123990[0];
        }
        FUN_020c2b84(self + 4, resource, 3, 0, 1);
    }
}
