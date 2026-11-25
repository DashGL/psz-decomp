// FUN_overlay_12__0213323c @ 0x0213323c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213323c @ 0x0213323c (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Copy receiver list bounds into output descriptor then clamp selection.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__0213323c(char *p,int *out) {int selected=*(int *)(p+4008);int count=*(int *)(p+4000);int offset=*(int *)(p+4004);out[3]=offset;out[2]=selected;out[0]=count;out[1]=5;FUN_overlay_12__0211f880(out);}
