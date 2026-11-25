// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5a, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020d37bc(int, int, unsigned short);
extern int FUN_020d3288(void *, int, int);
int FUN_020d4b14(char *a, int *b) {
    FUN_020d37bc(*(int *)(a + 0x50), b[0] + *(int *)(*(int *)(a + 8) + 0x44) + 5, *(unsigned short *)(a + 0x66));
    if (FUN_020d3288(a, *(int *)(a + 0x50) + b[0], b[1]) == 0) {
        return 0;
    }
    b[3] = *(int *)(a + 0x88);
    if ((*(unsigned char **)(a + 0x50))[b[0] + *(int *)(*(int *)(a + 8) + 0x44) + 2] == 2) {
        *(int *)(a + 0x8c) = *(int *)(a + 0x88);
    }
    return 1;
}
