// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8e, exact bytes and relocation targets.
// flags: -O4,s
extern void *FUN_02086e3c(void);
extern int FUN_020b077c(void *);
extern int FUN_0203a1a8(unsigned char *, int);
extern int FUN_020b07f4(void *);
extern int FUN_020b08e4(void *, unsigned char);

int FUN_0208badc(void *a0, unsigned char *r4, int r5) {
    switch (r4[0]) {
    case 0:
        if (r5 == FUN_020b077c(FUN_02086e3c())) {
            return 0;
        }
        if (FUN_0203a1a8(r4, 0x11) != 0) {
            return 0;
        }
        break;
    case 1:
        if (r5 == FUN_020b07f4(FUN_02086e3c())) {
            return 0;
        }
        break;
    case 2: {
        int i;
        for (i = 0; i < 4; i++) {
            if (r5 == FUN_020b08e4(FUN_02086e3c(), (unsigned char)i)) {
                return 0;
            }
        }
        break;
    }
    case 3:
        if (FUN_0203a1a8(r4, 3) != 0 && (int)r4[2] > 0x23 && (int)r4[2] <= 0x27) {
            return 0;
        }
        break;
    }
    return 1;
}
