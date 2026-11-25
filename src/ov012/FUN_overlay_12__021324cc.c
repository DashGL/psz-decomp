// FUN_overlay_12__021324cc @ 0x021324cc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021324cc @ 0x021324cc (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize one hundred fixed-stride records and clear trailing counters.
 * Field identities remain provisional.
 */
extern void FUN_0203955c(void *);
extern void FUN_overlay_12__02133018(void *);
char *FUN_overlay_12__021324cc(char *p) {char *q=p,*end=p+4000;do{FUN_0203955c(q);FUN_overlay_12__02133018(q+16);q+=40;}while(q<end);*(int *)(p+4000)=0;*(int *)(p+4004)=0;*(int *)(p+4008)=0;return p;}
