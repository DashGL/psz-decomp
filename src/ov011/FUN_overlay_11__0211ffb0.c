// FUN_overlay_11__0211ffb0 @ 0x0211ffb0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211ffb0 @ 0x0211ffb0 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Load file with alignment32 and publish allocated pointer and output byte count.
 * Field identities remain provisional.
 */
extern void *FUN_020ba374(const void *,int *,unsigned int);
void FUN_overlay_11__0211ffb0(void *unused,const void *name,void **buffer,int *size) {int count=0;*buffer=FUN_020ba374(name,&count,32);*size=count;}
