// FUN_02082efc @ 0x02082efc (0x22, thumb) - ported from FUN_0209d73c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: bounded lookup of20-byte prefix in52-byte records.
 * Record selector9be78 reaches this from573b0/5c2c8 gameplay paths.
 * Signed index0..count-1, count at owner+410. Invalid index fills output
 * with five-words-1. No null guard. Ghidra extra arguments are incidental.
 * Evidence: scratch/draft-coverage/batch62/0209d73c-disassemble.txt.
 */
typedef unsigned int u32;
extern void FUN_02041a08(u32 *,const u32 *),FUN_0206d178(u32 *);
void FUN_02082efc(u32 *output,u32 owner,int index)
{
    if(index>=0 && index<*(int *)(owner+0x410)) {
        FUN_02041a08(output,(const u32 *)(owner+(u32)index*0x34));
        return;
    }
    FUN_0206d178(output);
}
