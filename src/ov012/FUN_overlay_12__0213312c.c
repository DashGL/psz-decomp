// FUN_overlay_12__0213312c @ 0x0213312c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213312c @ 0x0213312c (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear record count and invalidate selected record only for indices zero through ninety-nine.
 * Field identities remain provisional.
 */
extern void FUN_0203955c(void *);
void FUN_overlay_12__0213312c(char *p) {int index;*(int *)(p+4000)=0;index=*(int *)(p+4008);if(index>=0&&index<100)FUN_0203955c(p+index*40);}
