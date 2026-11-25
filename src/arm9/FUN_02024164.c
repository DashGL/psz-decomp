// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_0202b334(int);
extern int FUN_020240b0(int);
extern struct { int p0; int p4; } D_021181a0;

int FUN_02024164(void) {
    int p = *(int *)(D_021181a0.p4 + 0xa4);
    if (p != 0) {
        if (*(unsigned char *)(p + 9) != 0) {
            return FUN_0202b334(p);
        }
        return FUN_020240b0(p);
    }
    return 1;
}
