// FUN_02030658 @ 0x02030658 (0x22, thumb) - ported from FUN_02071b50 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: copy entity position then forward original source to optional children.
 * Banked rotating movement 02078640 supplies the new triple. ROM uses paired
 * word loads/stores then third word; aggregate copy expresses that operation.
 * Call 732f4 uses only two arguments, confirmed by its reconstructed body.
 * Evidence: scratch/draft-coverage/batch31/02071b50-disassemble.txt.
 */
typedef unsigned int u32;
typedef struct {u32 x,y,z;} Position;
extern void FUN_020348e4(u32,Position *);
void FUN_02030658(u32 entity,Position *position)
{
    *(Position *)(entity+0x1c)=*position;
    if (*(u32 *)(entity+0xc)) FUN_020348e4(*(u32 *)(entity+0xc),position);
}
