// FUN_0206d178 @ 0x0206d178 (0x10, thumb) - ported from FUN_020a18e4 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: initialize invalid20-byte record to five all-ones words.
 * Fallback for indexed gameplay record selection9be78/9d73c. Stores in
 * increasing address order, no guard or additional fields.
 * Evidence: scratch/draft-coverage/batch62/020a18e4-disassemble.txt.
 */
typedef unsigned int u32;
void FUN_0206d178(u32 *output)
{
    output[0]=(u32)-1;
    output[1]=(u32)-1;
    output[2]=(u32)-1;
    output[3]=(u32)-1;
    output[4]=(u32)-1;
}
