// FUN_overlay_9__0211f58c @ 0x0211f58c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f58c @ 0x0211f58c (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate receiver with supplied option and mark successful construction active.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern unsigned int *FUN_overlay_9__0211fdcc(void *,unsigned int);
void *FUN_overlay_9__0211f58c(unsigned int value) {unsigned int *p=FUN_020ba894(92);if(p)p=FUN_overlay_9__0211fdcc(p,value);if(p)p[2]=1;return p;}
