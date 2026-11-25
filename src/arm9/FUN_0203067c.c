// FUN_0203067c @ 0x0203067c (0x10, thumb) - ported from FUN_02071b74 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: store entity heading and forward it to optional child pair.
 * Banked rotating movement 02078640 supplies the heading; store truncates
 * at +0x2c, and child 73318 also consumes only the low halfword.
 * Evidence: scratch/draft-coverage/batch31/02071b74-disassemble.txt.
 */
typedef unsigned int u32;
extern void FUN_02034904(u32,unsigned short);
void FUN_0203067c(u32 entity,unsigned short heading)
{
    *(unsigned short *)(entity+0x2c)=heading;
    if (*(u32 *)(entity+0xc)) FUN_02034904(*(u32 *)(entity+0xc),heading);
}
