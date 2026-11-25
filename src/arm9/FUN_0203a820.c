// FUN_0203a820 @ 0x0203a820 (0x12, thumb) - ported from FUN_0203e024 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_0203a820 @ 0x0203e024, Thumb, 0x12 (true size; recorded 0x14 spans
 * the 0000 inter-function pad halfword). 1-byte tag comparator - the
 * resource-gate used by FUN_020645ac / FUN_0203df14 (scan 0920: 0.3%).
 * The tag arg is cast (unsigned char) inside the compare - Ghidra's
 * 'char param_2' reads back with lsls/lsrs (zero-extension), proving the
 * original parameter was WIDER than char and converted at the compare.
 * Verified: dsi/1.1 -O4,p; every byte matches the ROM (reloc-free).
 */
int FUN_0203a820(unsigned char *p, int tag)
{
    if (*p == (unsigned char)tag)
        return 1;
    return 0;
}
