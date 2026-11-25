// FUN_overlay_12__02125f0c @ 0x02125f0c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02125f0c @ 0x02125f0c (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Copy nonnull text into embedded buffer and set refresh bits.
 * Field identities remain provisional.
 */
extern unsigned int FUN_020c3f00(void *,const void *,unsigned int);
void FUN_overlay_12__02125f0c(char *p,const void *text) {if(text){FUN_020c3f00(p+100,text,256);*(unsigned int *)(p+96)|=3;}}
