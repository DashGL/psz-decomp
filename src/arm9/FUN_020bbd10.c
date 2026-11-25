// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern void FUN_02053508(int, int, int);
extern int FUN_02052d74(void);
extern void FUN_020bbcb4(void);
extern void FUN_020bbd08(void);
extern int FUN_02053dbc(void *);
extern int D_0211b2c0[];

void FUN_020bbd10(int a) {
    FUN_02053508(0xc, 0, 0);
    switch (D_0211b2c0[0x14]) {
    case 0:
    case 1:
        if (a == 1) {
            if (FUN_02052d74() == 0) {
                FUN_020bbcb4();
            }
        } else {
            switch (FUN_02053dbc((void *)FUN_020bbd08)) {
            case 2:
                return;
            }
        }
        break;
    }
}
