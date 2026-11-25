// FUN_0204b268 @ 0x0204b268 (0x1e, thumb) - ported from FUN_02064254 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: copy seven halfwords of an effect request prefix, in forward order.
 * Banked initializers 02064180/02064288 pass object+0x34 and request input.
 * First two fields copy individually, remaining five in a loop. No null or
 * overlap guard. Individual field identities are ???.
 * Evidence: scratch/draft-coverage/batch8/02064254-asm.txt and banked callers.
 */
void FUN_0204b268(unsigned short *destination,unsigned short *source)
{
    int i;
    destination[0]=source[0];
    destination[1]=source[1];
    for (i=0;i<5;i++) destination[i+2]=source[i+2];
}
