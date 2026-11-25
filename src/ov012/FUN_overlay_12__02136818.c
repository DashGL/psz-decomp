// FUN_overlay_12__02136818 @ 0x02136818 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02136818 @ 0x02136818 (0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,p
/* Resolve the handle under owner, then update the resolved dialog using the
 * third incoming descriptor argument. Corrected from an invalid legacy twin. */
extern void *FUN_overlay_12__02132020(int,void *);
extern void FUN_overlay_12__0213689c(void *,const void *);
void FUN_overlay_12__02136818(int handle,void *owner,const void *descriptor)
{
    void *object=FUN_overlay_12__02132020(handle,owner);
    if(object)FUN_overlay_12__0213689c(object,descriptor);
}
