// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0xa, exact bytes and relocations.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_02071890 @ 0x02071890 (0xa, thumb)
// flags: -O4,p
/* USA ROM: word +120 is read and bit zero is cleared/set.
 * The donor used bit two; actual immediate at 02071892 is one.
 */
typedef unsigned int u32;
#define SLOT_FLAGS_OFF 120
#define SLOT_FLAG_0 1u
void FUN_02071890(u32 slot)
{
    *(u32 *)(slot+SLOT_FLAGS_OFF) |= SLOT_FLAG_0;
}
