// FUN_020b04f4 @ 0x020b04f4 (0x32, thumb) - ported from FUN_0206e73c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Reached via bebb0 from live be684. Compare four-byte IDs in 16-byte
 * entries; signed halfword count is cached after reading the query ID.
 * Entry base is reloaded each iteration. Remaining fields ???. Batch267.
 */
typedef unsigned int u32;
typedef struct {u32 unknown;unsigned char *entries;short count;} Inventory;
extern u32 FUN_02098d84(const unsigned char *);
int FUN_020b04f4(Inventory *inventory,const unsigned char *key)
{
    u32 wanted=FUN_02098d84(key);
    int count=inventory->count,index;
    for(index=0;index<count;index++)
        if(FUN_02098d84(inventory->entries+index*16)==wanted) return index;
    return -1;
}
