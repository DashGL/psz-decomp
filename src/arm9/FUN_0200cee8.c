// Verified full 240-byte body through 0200cfd8; inventory includes the next independent function.
// flags: -O4,s
// Full240-byte body; real global-field identity correction, not pool ordering.
// Evidence: notes/reference/fullspan-low-20261113/FUN_0200cee8-proof.json
extern int FUN_02084bdc(void *);
extern int FUN_0200d0f4(void);
extern void FUN_0206b994(int, int, int);
extern void FUN_0206b90c(int *, int *);
extern int FUN_0206b768(int, int, int, int);
extern void FUN_020c1b6c(int);
extern int FUN_020c1ba4(void);
extern void FUN_020c1b8c(int);
extern void FUN_0200d4e8(void);
extern char DAT_0211a51c[];
extern struct {
    int pad[3];
    int f0c;
    int f10;
} DAT_02101dd4;
extern int DAT_020f65d0;

int FUN_0200cee8(void) {
    int *unused = &DAT_020f65d0;
    if (FUN_02084bdc(DAT_0211a51c) != 1) {
        if (((*(unsigned short *)0x027fffa8 & 0x8000) >> 15) == 1) {
            if (FUN_0200d0f4() == 1) {
                FUN_0206b994(0xc, 0, 0);
                return 0;
            }
        }
    }
    if (((*(unsigned short *)0x027fffa8 & 0x8000) >> 15) == 1) {
        if (DAT_02101dd4.f10 == 0) {
            int sp04 = 0;
            int sp00 = 0;
            FUN_0206b90c(&sp04, &sp00);
            if (sp04 == 1 || sp00 == 1) {
                FUN_0206b768(2, 0, 0, 0);
                DAT_02101dd4.f10 = 1;
            }
        }
        if (DAT_02101dd4.f0c == 0) {
            FUN_020c1b6c(1);
            DAT_020f65d0 = FUN_020c1ba4();
            FUN_020c1b8c(0);
            FUN_0200d4e8();
            DAT_02101dd4.f0c = 1;
        }
    } else {
        if (DAT_02101dd4.f10 == 1) {
            if (FUN_0206b768(2, 1, 0, 0) == 0) {
                DAT_02101dd4.f10 = 0;
            }
        }
        if (DAT_02101dd4.f0c == 1) {
            FUN_020c1b6c(0);
            FUN_020c1b8c(DAT_020f65d0);
            DAT_02101dd4.f0c = 0;
        }
    }
    return 0;
}
