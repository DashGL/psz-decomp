// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,p
typedef struct { int w[18]; } S0x48;
extern void FUN_020656b8(void *, int, int);
extern int FUN_020ddc48(int);
extern void FUN_020dda7c(void);
extern volatile int DAT_0211dbd8[];
extern const char DAT_02100258[];

int FUN_020dd9c4(void *param_1, int param_2) {
    void *(*alloc_fn)(const void *, int) = *(void *(**)(const void *, int))((char *)param_1 + 0x40);
    int p;
    if (DAT_0211dbd8[2] != 0) {
        return 2;
    }
    p = (int)alloc_fn(DAT_02100258, 0x13f4);
    DAT_0211dbd8[2] = p;
    if (p == 0) {
        return 2;
    }
    FUN_020656b8((void *)p, 0, 0x13f4);
    *(int *)(DAT_0211dbd8[2] + 0x1314) = param_2;
    DAT_0211dbd8[0] = 0;
    FUN_020656b8((void *)(DAT_0211dbd8[2] + 0x1008), 0, 0x1c4);
    *(int *)(DAT_0211dbd8[2] + 0x1008) = 0x4e84;
    p = DAT_0211dbd8[2];
    *(S0x48 *)(p + 0x11cc) = *(S0x48 *)param_1;
    *(unsigned short *)(p + 0x11fe) = 0;
    *(unsigned char *)(DAT_0211dbd8[2] + 0x120b) = 0;
    *(int *)(DAT_0211dbd8[2] + 0x1004) = FUN_020ddc48(1);
    p = *(int *)(DAT_0211dbd8[2] + 0x1004);
    if (p == 0) {
        DAT_0211dbd8[1] = 0;
        FUN_020dda7c();
        return 0;
    }
    return p;
}
