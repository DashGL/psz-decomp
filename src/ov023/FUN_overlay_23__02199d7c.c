// FUN_overlay_23__02199d7c @ 0x02199d7c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_23__02199d7c @ 0x02199d7c (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Default output to one fixed-point unit then query transform sixteen when available.
 * Field identities remain provisional.
 */
extern void *FUN_02036c88(void *,int);
extern int FUN_0204260c(void *,int,void *,void *);
void FUN_overlay_23__02199d7c(void *p,unsigned int unused,unsigned int *out) {unsigned int transform[12];void *child;*out=4096;child=FUN_02036c88(p,0);if(child&&FUN_0204260c(child,16,transform,0))*out=transform[10];}
