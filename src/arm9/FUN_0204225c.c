// FUN_0204225c @ 0x0204225c (0x1a, thumb) - ported from FUN_02070248 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* resolve one of five entity slots at object+0xcc.
 * ROM 02070248..02070261 (0x1a executable + 2-byte pad), Thumb.
 * Signed indices <=-1 or >=5 return null; otherwise read the indexed word.
 * No object-null guard. Banked 02064af8 uses this to tick entity slot counters;
 * 02064728 and 02054ebc also use the slot family. Slot ownership beyond these
 * operations is ???. Evidence: scratch/draft-coverage/batch3/02070248-asm.txt.
 */
typedef unsigned int u32;
#define ENTITY_SLOT_COUNT 5
#define ENTITY_SLOTS_OFF 0xcc
u32 FUN_0204225c(u32 object,int index)
{
    if (index>-1 && index<ENTITY_SLOT_COUNT)
        return *(u32 *)(object+index*4+ENTITY_SLOTS_OFF);
    return 0;
}
