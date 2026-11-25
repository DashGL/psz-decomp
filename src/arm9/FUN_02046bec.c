// FUN_02046bec @ 0x02046bec (0xa, thumb) - ported from FUN_0207106c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* Draft: Clear slot flag bit 2, preserving every other bit.
 * Effect attachment routines 020643a8/02064434 and banked 02064728 use
 * this field at slot+4. The flag's higher-level meaning is ???.
 * No null guard. Evidence: scratch/draft-coverage/batch6/0207106c-asm.txt.
 */
typedef unsigned int u32;
#define SLOT_FLAGS_OFF 4
#define SLOT_FLAG_2 4u
void FUN_02046bec(u32 slot)
{
    *(u32 *)(slot+SLOT_FLAGS_OFF) &= ~SLOT_FLAG_2;
}
