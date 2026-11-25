// FUN_020b08e4 @ 0x020b08e4 (0x38, thumb) - ported from FUN_020682f0 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: search type2 records for requested key flag.
 * Key clearing68120 consumes this index. Reload signed count each iteration
 * after callback; records pointer+4 stride16, flags pointer+8 stride4.
 * First nonzero6816c result wins; absent returns -1. No pointer guards.
 * Exact record/key domains ???. Evidence: scratch/draft-coverage/batch42/020682f0-disassemble.txt.
 */
typedef unsigned int u32;
extern int FUN_020b0760(u32 *,u32);
int FUN_020b08e4(u32 container,u32 key)
{
    int index;
    for (index=0;index<*(short *)(container+12);index++) {
        if (*(unsigned char *)(*(u32 *)(container+4)+index*16)==2 &&
            FUN_020b0760((u32 *)(*(u32 *)(container+8)+index*4),key)) return index;
    }
    return -1;
}
