// FUN_02080ae0 @ 0x02080ae0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// flags: -O4,p
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
/* USA ROM reconstruction, 2026-11-04. Stop the selected actor effect sequence.
 * Evidence: scratch/coverage-high-game/inspect-repair80ae0.txt.
 * The lookup returns a 28-byte slot for actor IDs 0..3; stop consumes the slot and notify flag.
 */
extern void *FUN_02080898(int actor_id);
extern void FUN_02080af4(void *slot, int notify);
void FUN_02080ae0(int actor_id, int notify)
{
    void *slot = FUN_02080898(actor_id);
    if (slot != 0) {
        FUN_02080af4(slot, notify);
    }
}
