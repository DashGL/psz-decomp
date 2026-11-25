// FUN_overlay_12__021351e0 @ 0x021351e0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__021351e0 @ 0x021351e0 (thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
/* Slot+8 ABI resolved by base and all18 distinct derived tables:
 * banked02038ff0 consumes only receiver, marks its flags and returns. */
extern void FUN_overlay_12__02136808(int,void *);
void FUN_overlay_12__021351e0(int *handle)
{
    FUN_overlay_12__02136808(*handle,*(void **)0x0213f2dc);
    *handle=-1;
}
