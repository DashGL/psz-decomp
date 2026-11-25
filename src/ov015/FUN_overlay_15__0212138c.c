// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
int FUN_020683d4(void);
void FUN_020683e8(int);
void FUN_02065774(const void *, void *, int);
void FUN_020656b8(int, void *, int);
void FUN_0206552c(const void *, void *, int);
int FUN_overlay_15__02121124(void);
int FUN_0202de28(void *, void *, int);

extern int data_0213d200[];

int FUN_overlay_15__0212138c(const void *arg0, const void *arg1, int arg2) {
    int irq = FUN_020683d4();
    data_0213d200[3] = arg2;
    if (arg1 != 0) {
        FUN_02065774(arg1, (void *)data_0213d200[9], 0x50);
    } else {
        FUN_020656b8(data_0213d200[9], 0, 0x50);
    }
    FUN_0206552c(arg0, (void *)data_0213d200[8], 0xc0);
    if (FUN_overlay_15__02121124() == 1) {
        data_0213d200[6] = 8;
        FUN_020683e8(irq);
        return 1;
    }
    if (data_0213d200[6] == 3 && FUN_0202de28((void *)data_0213d200[8], (void *)data_0213d200[9], data_0213d200[3]) == 3) {
        data_0213d200[6] = 8;
        FUN_020683e8(irq);
        return 1;
    }
    FUN_020683e8(irq);
    return 0;
}
