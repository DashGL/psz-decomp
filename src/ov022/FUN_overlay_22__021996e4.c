// FUN_overlay_22__021996e4 @ 0x021996e4 (0x32, thumb) - ported from FUN_02097800 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: copy eight signed-byte level-parameter fields in forward order.
 * Banked loader02097714 transfers selected player-level data through this.
 * ROM sign-extends each byte load then stores low8 bits; no bulk copy or
 * overlap/null guard. Individual field meanings remain ???.
 * Evidence: scratch/draft-coverage/batch22/02097800-asm.txt and banked caller.
 */
void FUN_overlay_22__021996e4(signed char *destination,signed char *source)
{
    destination[0]=source[0];
    destination[1]=source[1];
    destination[2]=source[2];
    destination[3]=source[3];
    destination[4]=source[4];
    destination[5]=source[5];
    destination[6]=source[6];
    destination[7]=source[7];
}
