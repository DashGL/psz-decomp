// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020be5c0 @ 0x020be5c0 (0x12, thumb) - ported from FUN_020abaf0 [banked], verified via tools/match.py (word compare + verify_relocs).
extern int FUN_020bef14(int table, int handle, int index);
int FUN_020be5c0(int table, int handle, int index)
{
    int payload = FUN_020bef14(table, handle, index);
    if (payload != 0) return payload + 0xc;
    return 0;
}
