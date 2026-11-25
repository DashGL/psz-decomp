// FUN_020b0714 @ 0x020b0714 (0x4c, thumb) - ported from FUN_02068120 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: clear requested key bit from first qualifying type2 entry.
 * 67ffc invokes this for four keys after clearing type1 selection. Search
 * 682f0 receives container AND key; then independently recheck index/type
 * and predicate6816c==1. Reload flags base after predicate; key<4 clears
 * bit(key+3), return1 after successful predicate even if clear is skipped.
 * Evidence: scratch/draft-coverage/batch42/02068120-disassemble.txt.
 */
typedef unsigned int u32;
extern int FUN_020b08e4(u32,u32),FUN_020b0760(u32 *,u32);
int FUN_020b0714(u32 container,u32 key)
{
    int index=FUN_020b08e4(container,key);
    if (index>=0 && index<*(short *)(container+12) &&
        *(unsigned char *)(*(u32 *)(container+4)+index*16)==2) {
        u32 offset=index*4;
        if (FUN_020b0760((u32 *)(*(u32 *)(container+8)+offset),key)==1) {
            u32 flags=*(u32 *)(container+8);
            if (key<4) *(u32 *)(flags+offset)&=~(1u<<(key+3));
            return 1;
        }
    }
    return 0;
}
