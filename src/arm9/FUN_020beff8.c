// FUN_020beff8 @ 0x020beff8 (0x1a, thumb) - ported from FUN_020ac580 [banked], verified via tools/match.py (word compare + verify_relocs).
/* Verified byte-exact with dsi/1.1; strict relocated-byte check passed.
 * FUN_020beff8 @ 0x020ac580 (0x1a Thumb, plus 2-byte alignment).
 * Deactivate a nonzero-active slot before unlinking it. The table argument
 * is passed through to the unlink helper; active is a signed-byte test.
 */
extern void FUN_020bf048(void *slots, signed char *slot);
void FUN_020beff8(void *slots, signed char *slot)
{
    unsigned int active = slot[0] != 0;
    if (active) {
        slot[0] = 0;
        FUN_020bf048(slots, slot);
    }
}
