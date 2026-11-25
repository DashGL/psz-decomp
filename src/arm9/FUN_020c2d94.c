// flags: -O4,s
extern int D_0211c8e4[3];
extern int DAT_0211c8e4[3];
extern int D_020fcb14[3];
extern int DAT_020fcb14[3];
extern void FUN_020c2e90(int *, int *, int);
int FUN_020c2d94(int channel, int mode, int direction) {
    if (channel < 0 || channel > 2) return 0;
    if (D_0211c8e4[0] != 0) return 0;
    if (DAT_0211c8e4[channel] != 0 && mode == 0) return 0;
    if (channel == 0) {
        D_0211c8e4[2] = 0;
        D_0211c8e4[1] = 0;
        D_020fcb14[2] = direction;
        D_020fcb14[1] = direction;
    }
    if (mode == 0) {
        FUN_020c2e90(&mode, &direction, channel);
    }
    DAT_0211c8e4[channel] = mode;
    switch (direction) {
    case 1:
    case 2:
        DAT_020fcb14[channel] = *(volatile int *)&direction;
        break;
    }
    return 1;
}