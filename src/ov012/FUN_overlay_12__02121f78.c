// FUN_overlay_12__02121f78 @ 0x02121f78 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121f78 @ 0x02121f78 (code 0x20, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Test global active handle against records reachable from global receiver; forwards live second argument.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__021367f4(unsigned int,void *);
int FUN_overlay_12__02121f78(void) {unsigned int *p=*(unsigned int **)0x0213ec98;if(p){unsigned int handle=p[810];if(handle!=-1u)return FUN_overlay_12__021367f4(handle,p);}return 0;}
