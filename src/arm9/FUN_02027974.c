// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Msg20 {
    int f0;
    int f4;
    int f8;
};
extern void FUN_02066998(char *);
extern int FUN_020683d4(void);
extern void FUN_02066d68(void);
extern int FUN_02066fc8(char *, struct Msg20 **, int);
extern void FUN_02066f34(int, int, int);
extern void FUN_02025f80(struct Msg20 *);
extern void FUN_02066d9c(void);
extern void FUN_02066ae4(void);
extern void FUN_020683e8(int);

void FUN_02027974(char *param_1) {
    int irq;
    struct Msg20 *msg;
    if (param_1 == 0) {
        return;
    }
    FUN_02066998(param_1 + 0x20);
    irq = FUN_020683d4();
    FUN_02066d68();
    while (FUN_02066fc8(param_1, &msg, 0) != 0) {
        if (msg != 0) {
            if (msg->f8 != 0) {
                FUN_02066f34(msg->f8, -11, 0);
            }
            FUN_02025f80(msg);
        }
    }
    FUN_02066d9c();
    FUN_02066ae4();
    FUN_020683e8(irq);
}
