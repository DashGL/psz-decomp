// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0202b4b0(int);

int FUN_0202b5f4(int a) {
    int r4 = *(int *)(a + 0xc);
    if (*(int *)(r4 + 0x824) == 0 || *(unsigned char *)(r4 + 0x456) == 0) {
        FUN_0202b4b0(a);
    }
    if (*(int *)(r4 + 0x824) != 0 && *(unsigned char *)(r4 + 0x456) != 0) {
        return *(int *)(r4 + 0x828) - *(int *)(r4 + 0x82c);
    }
    if (*(int *)(r4 + 0x824) == 0 && (*(unsigned char *)(a + 8) != 4 || *(unsigned char *)(r4 + 0x455) == 9)) {
        return -1;
    }
    return 0;
}
