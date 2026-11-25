// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe, exact bytes and relocation targets; argument/return contract corrected.
// Return/argument ABI: notes/reference/resume2-root-20261112/return-020c3490.json
// FUN_020c3490 @ 0x020c3490 (0xe, thumb) - ported from FUN_020a934c [stale], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c3490 @ 0x020a934c (0xe, Thumb; 2-byte pad excluded).
 * Set the request-id field +0x74 to -1, then clear +0x78 and +0x7c.
 * The ROM re-materializes zero after the -1 store, before both flag stores.
 * This adapter is live; the current address is ground truth.
 */
unsigned int * FUN_020c3490(unsigned int *state)
{
    state[0x74 >> 2] = 0xffffffff;
    state[0x78 >> 2] = 0;
    state[0x7c >> 2] = 0;
    return state;
}
