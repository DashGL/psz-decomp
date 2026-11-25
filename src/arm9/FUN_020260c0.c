// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S3 {
    int (*f0)(struct S3 *);
    int f4;
    int f8;
};
extern void FUN_02067108(int, struct S3 **, int);
extern int FUN_020683d4(void);
extern void FUN_02066d68(void);
extern void FUN_02066fc8(int, int, int);
extern void FUN_02066f34(int, int, int);
extern void FUN_02025f80(struct S3 *);
extern void FUN_02066d9c(void);
extern void FUN_020683e8(int);

void FUN_020260c0(int param_1) {
    struct S3 *msg;
    while (1) {
        int irq;
        int res;
        FUN_02067108(param_1, &msg, 1);
        if (msg == 0) {
            return;
        }
        res = msg->f0(msg);
        irq = FUN_020683d4();
        FUN_02066d68();
        FUN_02066fc8(param_1, 0, 0);
        if (msg->f4 != 0) {
            *(int *)(msg->f4 + 0x6c) = res;
        }
        if (msg->f8 != 0) {
            FUN_02066f34(msg->f8, res, 0);
        }
        FUN_02025f80(msg);
        FUN_02066d9c();
        FUN_020683e8(irq);
    }
}
