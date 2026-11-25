// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x92, exact bytes and relocation targets.
struct B16 {
    unsigned char b[16];
};
struct Req {
    struct B16 s0;
    struct B16 s10;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
};

extern void *FUN_020c7e54(void);
extern int FUN_020c6da8(int, int, int);
extern void FUN_020c6e28(int, struct Req *);

int FUN_020c86c4(const struct B16 *param_1, const struct B16 *param_2, int param_3, int param_4,
                 int param_5, int param_6, int param_7, int param_8) {
    void *ctx = FUN_020c7e54();
    struct Req local_40;
    if (*(int *)((char *)ctx + 0xc) == 0) {
        return 3;
    }
    if (*(const signed char *)param_1 == 0) {
        return 10;
    }
    if (*(const signed char *)param_2 == 0) {
        return 10;
    }
    local_40.f2c = param_4;
    local_40.f24 = param_5;
    local_40.f34 = param_3;
    local_40.f30 = param_6;
    local_40.f28 = param_7;
    local_40.s0 = *param_1;
    local_40.s10 = *param_2;
    local_40.f20 = FUN_020c6da8(4, 1, 0);
    if (local_40.f20 == 0) {
        return 1;
    }
    local_40.f38 = param_8;
    FUN_020c6e28(*(int *)((char *)ctx + 8), &local_40);
    return 0;
}
