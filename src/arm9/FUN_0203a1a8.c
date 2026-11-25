// FUN_0203a1a8 @ 0x0203a1a8 (0x12, thumb) - ported from FUN_02062204 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* compare an item's subtype byte with the low byte of the input.
 * ROM 02062204..02062215 (0x12 executable + 2-byte pad), Thumb.
 * The ROM loads UNSIGNED byte+1 and narrows the wider argument by lsl/lsr.
 * Ghidra's signed-char parameter is misleading. Banked 0206d770 uses subtype
 * 17 to choose player resource-cache policy; 020645ac gates spawn/load work.
 * No null or tag check is added. Other subtype meanings remain ???.
 * Evidence: scratch/draft-coverage/batch3/02062204-asm.txt.
 */
int FUN_0203a1a8(unsigned char *item,int subtype)
{
    if (item[1]==(unsigned char)subtype)
        return 1;
    return 0;
}
