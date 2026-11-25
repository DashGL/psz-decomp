// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    char pad[0x3c];
    int f3c;
    char pad2[0x10];
    int f50;
    int f54;
    int f58;
    int f5c;
} State;
extern State D_0211b2c0;
extern int D_020fc950;
extern int FUN_02054c4c(int);
extern int FUN_02053d84(void *);
extern void FUN_020bb538(void);
int FUN_020bbb18(void) {
    D_0211b2c0.f5c = 0;
    D_020fc950 = -1;
    if (D_0211b2c0.f3c != 0) {
        if (FUN_02054c4c(D_0211b2c0.f58) != 0) {
            return 0;
        }
        D_0211b2c0.f3c = 0;
    }
    if (D_0211b2c0.f50 != 2 && D_0211b2c0.f50 != 1) {
        D_0211b2c0.f50 = 2;
    }
    if (FUN_02053d84((void *)FUN_020bb538) != 2) {
        D_0211b2c0.f50 = 1;
        return 0;
    }
    return 1;
}
