// flags: -O4,s
extern char DAT_overlay_18__02124544[];
extern int FUN_020bbf6c(unsigned int), FUN_overlay_18__02121ae4(void *, int), FUN_overlay_18__02121658(void *), FUN_overlay_18__02121740(void *), FUN_overlay_18__021215f4(void *, void *), FUN_020872c4(void *);
extern void *FUN_overlay_18__021212f0(void), *FUN_02086e3c(void);
extern void FUN_overlay_18__02121bf4(void *), FUN_020c193c(int, int, int, int, int), FUN_020c4434(void *), FUN_020c44e4(void *, const void *), FUN_overlay_18__02121318(void *, int);
int FUN_overlay_18__0211f090(int *self, short *event)
{
    int result = 0, accepted;
    unsigned short name[8];
    if (self[1] == 0) {
        char *volatile dst = DAT_overlay_18__02124544;
        if (FUN_020bbf6c(256)) {
            FUN_overlay_18__02121ae4(FUN_overlay_18__021212f0(), 1);
            FUN_020c193c(0, 0, 0, 0, -1);
        } else if (FUN_020bbf6c(512)) {
            FUN_overlay_18__02121ae4(FUN_overlay_18__021212f0(), 0);
            FUN_020c193c(0, 0, 0, 0, -1);
        } else if (FUN_020bbf6c(8)) {
            FUN_overlay_18__02121bf4(FUN_overlay_18__021212f0());
            FUN_020c193c(0, 2, 0, 0, -1);
        }
        if (!FUN_overlay_18__02121658(FUN_overlay_18__021212f0())) {
            accepted = 1;
            if (FUN_overlay_18__02121740(FUN_overlay_18__021212f0()) == 1) {
                FUN_020c4434(name);
                if (FUN_overlay_18__021215f4(FUN_overlay_18__021212f0(), name) > 0) {
                    FUN_020c44e4(dst, name);
                    { char *p = dst + 16; dst = p; FUN_020c44e4(p, name); }
                    event[0] = 7; event[1] = 3; self[1] = 2; result = 1;
                } else { FUN_020c193c(0, 5, 0, 0, -1); accepted = 0; }
            } else { event[0] = 5; event[1] = 1; self[1] = 2; result = 1; }
            if (!accepted) FUN_overlay_18__02121318(FUN_overlay_18__021212f0(), 0);
        }
    } else if (self[1] == 1) {
        FUN_overlay_18__02121658(FUN_overlay_18__021212f0());
        if (!FUN_020872c4(FUN_02086e3c())) { event[0] = 12; event[1] = 3; self[1] = 2; result = 1; }
    } else FUN_overlay_18__02121658(FUN_overlay_18__021212f0());
    return result;
}
