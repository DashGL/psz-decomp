// FUN_overlay_12__02136808 @ 0x02136808 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02136808 @ 0x02136808 (thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
/* Slot+8 ABI resolved by base and all18 distinct derived tables:
 * banked02038ff0 consumes only receiver, marks its flags and returns. */
extern void *FUN_overlay_12__02132020(int,void *);
extern void FUN_overlay_12__02131f88(void *);
void FUN_overlay_12__02136808(int handle,void *owner)
{
    void *object=FUN_overlay_12__02132020(handle,owner);
    if(object)FUN_overlay_12__02131f88(object);
}
