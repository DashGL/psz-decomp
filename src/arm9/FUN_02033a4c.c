// FUN_02033a4c @ 0x02033a4c (0x14, thumb) - ported from FUN_02070b88 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: attach entity child as first owner child, otherwise append to chain.
 * Banked child constructor 70c34 supplies owner and new child. Empty owner
 * stores child at +4 only; existing child is passed to 708bc with the new
 * child still in r1. Callee recursively appends and writes the back-link;
 * Ghidra omits that second input. No null guard on the new child.
 * Evidence: scratch/draft-coverage/batch35/02070b88-disassemble.txt and
 * scratch/draft-coverage/batch35/0206e658-disassemble.txt.
 */
typedef unsigned int u32;
extern void FUN_0206e658(u32,u32);
void FUN_02033a4c(u32 owner,u32 child)
{
    u32 first=*(u32 *)(owner+4);
    if (!first) {
        *(u32 *)(owner+4)=child;
        return;
    }
    FUN_0206e658(first,child);
}
