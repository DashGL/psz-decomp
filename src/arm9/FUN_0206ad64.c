// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
struct S {
    int f0;
    void (*f4)(int, int, int);
    char pad[0x30];
    unsigned short f38;
    unsigned short f3a;
};
extern struct S DAT_0211a144;
extern int FUN_020683d4(void);
extern int FUN_020688c0(int, int, int);
extern void FUN_020683e8(int);

static inline int send_cmd(int val) {
    return FUN_020688c0(6, val | 0x3000300, 0) >= 0;
}

void FUN_0206ad64(int param_1, int param_2) {
    int s = FUN_020683d4();
    if (!send_cmd(param_2)) {
        FUN_020683e8(s);
        DAT_0211a144.f38 |= 8;
        if (DAT_0211a144.f4 != 0) {
            DAT_0211a144.f4(3, 4, 0);
        }
        return;
    }
    DAT_0211a144.f3a |= 8;
    DAT_0211a144.f38 &= ~8;
    FUN_020683e8(s);
}
