// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02029a08(int, int, int);
extern void FUN_02029ce4(int);
extern void FUN_02028938(int, int, int);
extern void FUN_02029d44(int);

void FUN_02029f10(int a, int b) {
    FUN_02029a08(a, b, *(int *)(a + 0x81c));
    FUN_02029ce4(a);
    FUN_02028938(a, 0, 0);
    FUN_02029d44(a);
    *(unsigned char *)(a + 0x455) = 5;
}
