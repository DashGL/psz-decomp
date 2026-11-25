// FUN_overlay_20__021986bc @ 0x021986bc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_20__021986bc @ 0x021986bc (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize compact event descriptor from receiver field and submit it.
 * Field identities remain provisional.
 */
extern void FUN_overlay_20__02198664(void *);
extern void FUN_overlay_20__02198674(void *,int,int);
extern void FUN_020bce3c(void *);
void FUN_overlay_20__021986bc(unsigned int *p) {unsigned int event[3];FUN_overlay_20__02198664(event);FUN_overlay_20__02198674(event,2,12);event[1]=p[3];FUN_020bce3c(event);}
