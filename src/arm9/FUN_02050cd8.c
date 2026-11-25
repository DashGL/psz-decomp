// FUN_02050cd8 @ 0x02050cd8 (0x24, thumb) - ported from FUN_020a2af4 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: release each resource triple in an application teardown-list node.
 * Banked020a2bcc runs this during transition/shutdown/save teardown.
 * Cache signed count+0x304, iterate twelve-byte records at+4, invoke
 * 02050de0(record), return original node. Negative/zero count makes no calls;
 * no count clamp or refreshed count after callbacks. Record roles are ???.
 * Evidence: scratch/draft-coverage/batch15/020a2af4-asm.txt and banked caller.
 */
typedef unsigned int u32;
#define RESOURCE_TRIPLES_OFF 4
#define RESOURCE_TRIPLE_COUNT_OFF 0x304
#define RESOURCE_TRIPLE_STRIDE 12
extern void FUN_02050de0(u32);
u32 FUN_02050cd8(u32 node)
{
    int count=*(int *)(node+RESOURCE_TRIPLE_COUNT_OFF),i;
    for (i=0;i<count;i++) FUN_02050de0(node+RESOURCE_TRIPLES_OFF+i*RESOURCE_TRIPLE_STRIDE);
    return node;
}
