// FUN_020390f4 @ 0x020390f4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch20-manifest.json; original draft retained for referenced provenance.
// FUN_020390f4 @ 0x020390f4 (0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,p
/* Draft: recognize entity states 23, 24 and 25 at object+0x240.
 * Used by banked 02083944, 020879c8, 02087a38 and 02087bb0 to gate state/
 * position transitions. State identities are ???; no guessed names added.
 * The unsigned subtract/range check rejects values outside the three states,
 * including negative bit patterns. No null guard or writes.
 * Evidence: USA ROM 020390f4 loads 9<<6 (0x240), not the prior draft offset0x244.
 */
typedef unsigned int u32;
#define ENTITY_STATE_OFF 0x240
#define FIRST_GUARDED_STATE 23u
#define GUARDED_STATE_COUNT 3u
int FUN_020390f4(u32 object)
{
    if (*(u32 *)(object+ENTITY_STATE_OFF)-FIRST_GUARDED_STATE<=2u)
        return 1;
    return 0;
}
