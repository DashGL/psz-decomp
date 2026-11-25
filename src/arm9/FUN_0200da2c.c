// flags: -O4,p -noThumb
extern unsigned int FUN_0206a160(void);
extern void *FUN_02011b20(void *, void *);
extern int FUN_02069e84(unsigned int);
extern void FUN_0200ded8(void *);
extern void FUN_02011944(void *);
extern int FUN_02011910(void *);
extern void FUN_02069578(int, int);
extern int FUN_0201195c(void *);
extern void FUN_0200de38(void *);
extern void FUN_02069538(int);

extern char DAT_02101e3c[];
extern const short DAT_020f1ad4[];

void FUN_0200da2c(void) {
    unsigned int active = FUN_0206a160();
    unsigned char *self = (unsigned char *)FUN_02011b20(DAT_02101e3c, 0);
    unsigned char *next;
    while (self != 0) {
        next = (unsigned char *)FUN_02011b20(DAT_02101e3c, self);
        if (!self[0x2d]) {
            if (FUN_02069e84(*(unsigned int *)(self + 0x30))) {
                self[0x2d] = 1;
            }
        }
        if (self[0x2d] && !(active & (1 << self[0x3c]))) {
            FUN_0200ded8(self);
        } else {
            int gain;
            FUN_02011944(self + 0x1c);
            {
                int a = DAT_020f1ad4[self[0x41]];
                int b = DAT_020f1ad4[self[0x40]];
                int c = DAT_020f1ad4[(*(unsigned char **)(self + 4))[0x20]];
                gain = DAT_020f1ad4[FUN_02011910(self + 0x1c) >> 8];
                gain += c + (b + a);
            }
            if (gain < -32768) {
                gain = -32768;
            } else if (gain > 32767) {
                gain = 32767;
            }
            if (gain != *(short *)(self + 0x3e)) {
                FUN_02069578(self[0x3c], gain);
                *(short *)(self + 0x3e) = (short)gain;
            }
            if (self[0x2c] == 2 && FUN_0201195c(self + 0x1c)) {
                FUN_0200de38(self);
            }
            if (self[0x2f]) {
                FUN_02069538(self[0x3c]);
                self[0x2f] = 0;
            }
        }
        self = next;
    }
}
