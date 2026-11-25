// flags: -O4,s
extern unsigned char *DAT_0213ec98;
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern void FUN_0200c938(void *, unsigned);
extern int FUN_overlay_12__02121f78(void);
extern void FUN_overlay_12__02136818(int, void *, const void *);
extern int FUN_overlay_12__0213682c(void *, const void *);

#pragma opt_propagation off
void FUN_overlay_12__02121ef8(const char *format, int argument, int a, int b, int c, int d, int e, int f, int g) {
    char text[256];
    unsigned config[9];
    unsigned char *owner;
    if (DAT_0213ec98) {
        if (format) {
            FUN_020c3f90(text, 256, format, argument);
        } else {
            text[0] = 0;
        }
        FUN_0200c938(config, 36);
        config[0] = (unsigned)text;
        config[3] = b;
        config[4] = e;
        config[2] = a;
        config[5] = f;
        config[6] = c;
        config[7] = d;
        config[8] = g;
        {
            int off = 0xca8;
            owner = DAT_0213ec98;
            if (FUN_overlay_12__02121f78()) {
                FUN_overlay_12__02136818(*(int *)(owner + off), owner, config);
            } else {
                *(int *)(owner + off) = FUN_overlay_12__0213682c(owner, config);
            }
        }
    }
}
