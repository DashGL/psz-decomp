// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x72, exact bytes and relocation targets.
// flags: -O4,s
int FUN_020c4898(int a, int b, int *c, int *d);
int FUN_020c4f10(int a, int b, int c);
int FUN_020c4d84(int a, int b, int c);
void FUN_020c4f70(int a, int b, int c, int d);
int FUN_020c4ca4(int a, int b, int c, int d);

int FUN_020c4aac(int a, int b, int c) {
    int sp4 = 0;
    int sp0 = 0;
    if (FUN_020c4898(a, b, &sp4, &sp0) == 0) {
        void (*fn)(int) = *(void (**)(int))(a + 0x1c);
        if (fn != 0) {
            fn(0);
        }
        return 0;
    }
    if (FUN_020c4d84(a, b, FUN_020c4f10(a, c, sp0)) == 0) {
        return 0;
    }
    FUN_020c4f70(a, c, c, sp0);
    int res = FUN_020c4ca4(a, sp4, c, sp0);
    FUN_020c4f70(a, c, c, sp0);
    return res;
}
