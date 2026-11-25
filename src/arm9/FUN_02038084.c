// FUN_02038084 @ 0x02038084 (0x22, thumb) - ported from FUN_0208b254 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: store a paired entity angle halfword and forward to optional child.
 * Banked derived entity constructor 02099538 supplies zero. Both stores occur
 * before the child pointer load. Reload the first halfword for forwarding.
 * Callee 020380a8 consumes only r0/r1: stores its halfword, shifts by four,
 * indexes paired signed halfwords, and tail-forwards the result. Ghidra's
 * extra r2/r3/stack arguments are not inputs. Angle interpretation follows
 * this lookup; precise units and pair distinction remain ???.
 * Evidence: scratch/draft-coverage/batch23/0208b254-disassemble.txt and
 * scratch/draft-coverage/batch23/020380a8-disassemble.txt.
 */
typedef unsigned int u32;
typedef unsigned short u16;
#define CHILD_OFF 0x8c
#define ANGLE_A_OFF 0xc0
#define ANGLE_B_OFF 0xc2
extern void FUN_020380a8(u32, u16);
void FUN_02038084(u32 object, u16 angle)
{
    *(u16 *)(object+ANGLE_A_OFF)=angle;
    *(u16 *)(object+ANGLE_B_OFF)=angle;
    if (*(u32 *)(object+CHILD_OFF))
        FUN_020380a8(*(u32 *)(object+CHILD_OFF),*(u16 *)(object+ANGLE_A_OFF));
}
