// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6e, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020d3fb0(void *, int, int);
extern int FUN_020d3fe4(void *, int, int);
extern int FUN_020d4078(void *, int, int);
extern int FUN_020d4080(void *, int, int);
extern int FUN_020d40dc(void *, int, int, int);
int FUN_020d4104(char *a, int b, int c, int d) {
    int r5 = *(int *)(*(char **)(a + 8) + 0x44) + 3;
    int r4 = d - r5;
    if (b == 0x64) {
        if (FUN_020d3fb0(a, c + r5, r4) == 0) {
            return 0;
        }
    } else if (b == 0x65) {
        if (FUN_020d3fe4(a, c + r5, r4) == 0) {
            return 0;
        }
    } else if (b == 0x66) {
        if (FUN_020d4078(a, c, d) == 0) {
            return 0;
        }
    } else if (b == 0x67) {
        if (FUN_020d4080(a, c + r5, r4) == 0) {
            return 0;
        }
    } else if (b == 0x68) {
        if (FUN_020d40dc(a, b, c, d) == 0) {
            return 0;
        }
    }
    return 1;
}
