// FUN_02033ff4 @ 0x02033ff4 (0x1a, thumb) - ported from FUN_020a5274 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: recursively unlink target after a game resource-manager node.
 * Banked releasea4e70 handles head separately. Splice target's next into
 * predecessor, leaving target unchanged. Missing target leaves list.
 * Recursive target argument stays in r1 despite Ghidra's omission.
 * Evidence: scratch/draft-coverage/batch51/02033ff4-disassemble.txt.
 */
typedef unsigned int u32;
void FUN_02033ff4(u32 node,u32 target)
{
    u32 next=*(u32 *)(node+0x20);
    if(next) {
        if(next==target) {
            *(u32 *)(node+0x20)=*(u32 *)(target+0x20);
            return;
        }
        FUN_02033ff4(next,target);
    }
}
