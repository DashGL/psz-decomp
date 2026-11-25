// FUN_0207efd8 @ 0x0207efd8 (0x20, thumb) - ported from FUN_0205641c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: three-component inequality,1 if any word differs, otherwise0.
 * Banked spawn initializer562b8 compares base/delta inputs with sentinel
 *20e9cd0. Short-circuit comparisons in ROM order, no pointer checks.
 * Evidence: scratch/draft-coverage/batch47/0205641c-disassemble.txt.
 */
typedef struct {int x,y,z;} Vector;
int FUN_0207efd8(const Vector *first,const Vector *second)
{
    if(first->x!=second->x || first->y!=second->y || first->z!=second->z) return 1;
    return 0;
}
