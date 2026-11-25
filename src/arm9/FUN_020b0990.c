// flags: -O4,s
extern void *FUN_020ba918(int);
extern char *FUN_020b100c(void *, void *, int, int, int);
extern void FUN_020b0a64(void *, int, int, int);
extern void FUN_020b0a88(void *, int);
extern int FUN_020b0f70(void *);

void *FUN_020b0990(void *parent, int slot, int mode, int value, int *position, unsigned short angle) {
    char *effect;
    if (slot >= 0 && slot < 4) {
        effect = FUN_020ba918(284);
        if (effect) effect = FUN_020b100c(effect, parent, slot, mode, value);
        if (effect) {
            FUN_020b0a64(effect, position[0], position[1], position[2]);
            switch (mode) {
            case 2:
                FUN_020b0a88(effect, (unsigned short)(FUN_020b0f70(effect) - 16384));
                break;
            case 3:
                *(int *)(effect + 96) = 2816;
                *(short *)(effect + 90) = 512;
                FUN_020b0a88(effect, FUN_020b0f70(effect));
                break;
            case 4:
                FUN_020b0a88(effect, (unsigned short)(angle - 32768));
                break;
            default:
                FUN_020b0a88(effect, angle);
                break;
            }
            return effect;
        }
    }
    return 0;
}
