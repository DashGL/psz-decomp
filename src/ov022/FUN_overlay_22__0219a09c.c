// FUN_overlay_22__0219a09c @ 0x0219a09c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a09c @ 0x0219a09c (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Apply supplied component flag to all indices in linked descriptor.
 * Field identities remain provisional.
 */
extern void FUN_020445a8(void *,int,int);
void FUN_overlay_22__0219a09c(unsigned int *p,int flag) {unsigned int *descriptor=(unsigned int *)p[3];if(descriptor[2]) {int i;for(i=0;i<((int *)p[3])[1];i++)FUN_020445a8((void *)p[1],((int *)((unsigned int *)p[3])[2])[i],flag);}}
