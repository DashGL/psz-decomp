// FUN_020967f0 @ 0x020967f0 (0x1c, thumb) - ported from FUN_02041cfc [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: find a slot ID in the active eight-byte record array.
 * Banked slot removal02041bd0 and lookup02040478 establish gameplay scope.
 * Signed count at object+4; records begin+8, key is second word at+0xc.
 * Return first matching index or count; negative count returns0. No guards
 * on object/count and no mutation. Other record fields are ??? here.
 * Evidence: scratch/draft-coverage/batch11/02041cfc-asm.txt and callers.
 */
typedef unsigned int u32;
#define SLOT_COUNT_OFF 4
#define SLOT_KEY_OFF 0xc
#define SLOT_RECORD_STRIDE 8
int FUN_020967f0(u32 object,u32 slot)
{
    int index=0;
    while (index<*(int *)(object+SLOT_COUNT_OFF) &&
           slot!=*(u32 *)(object+index*SLOT_RECORD_STRIDE+SLOT_KEY_OFF))
        index++;
    return index;
}
