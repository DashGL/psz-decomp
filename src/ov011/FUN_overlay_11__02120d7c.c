// FUN_overlay_11__02120d7c @ 0x02120d7c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__02120d7c @ 0x02120d7c (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Copy each descriptor record into larger destination stride and return advanced destination.
 * Field identities remain provisional.
 */
extern void FUN_020655d8(const void *,void *,unsigned int);
void *FUN_overlay_11__02120d7c(void *unused,char *destination,unsigned int *descriptor) {char *source=(char *)descriptor[2];char *end=source+descriptor[0]*108;do {FUN_020655d8(source,destination+52,108);source+=108;destination+=160;}while(source<end);return destination;}
