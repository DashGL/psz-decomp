// FUN_overlay_12__0212c214 @ 0x0212c214 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch01.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_overlay_12__02132020(int,void *);
extern void FUN_overlay_12__02131f88(void *);
void FUN_overlay_12__0212c214(int id,void *owner)
{
    void *object=FUN_overlay_12__02132020(id,owner);
    if(object)FUN_overlay_12__02131f88(object);
}
