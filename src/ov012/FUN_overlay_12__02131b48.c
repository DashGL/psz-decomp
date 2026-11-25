// FUN_overlay_12__02131b48 @ 0x02131b48 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131b48 @ 0x02131b48 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * When receiver is unloaded select resource bank from receiver flag and load it.
 * Field identities remain provisional.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c23bc(void *,const void *,int);
void FUN_overlay_12__02131b48(unsigned int *p) {if(!p[1]){int mode=p[0]?2:1;FUN_020c23bc(FUN_020c1fc8(),(void *)0x0213ba28,mode);}}
