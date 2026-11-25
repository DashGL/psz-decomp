// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0200dcd0 @ 0x0200dcd0 (0x28, arm) - ported from FUN_02028300 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_02069558(u8 arg, u8 value);

void FUN_0200dcd0(u8 *p, u8 a1) {
    if (p == 0 || a1 == p[0x2e]) {
        return;
    }
    FUN_02069558(p[0x3c], a1);
    p[0x2e] = a1;
}
