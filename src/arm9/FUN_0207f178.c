// FUN_0207f178 @ 0x0207f178 (0x1c, thumb) - ported from FUN_0205d3c0 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: clear allocated word slots and reset the container's active count.
 * Game state reset020a3f30 calls this from banked0209ac7c. Word0 is data,
 * word2 capacity, word3 active count. Clear words from data to data+4*capacity
 * using unsigned address comparison, preserving wrapping end calculation.
 * Missing data skips clear but still resets count. Other fields are ???.
 * Evidence: scratch/draft-coverage/batch17/0205d3c0-asm.txt and caller chain.
 */
typedef unsigned int u32;
void FUN_0207f178(u32 *container)
{
    u32 current=container[0];
    if (current) {
        u32 end=current+container[2]*4;
        for (;current<end;current+=4) *(u32 *)current=0;
    }
    container[3]=0;
}
