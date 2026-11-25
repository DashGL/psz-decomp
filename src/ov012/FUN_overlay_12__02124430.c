// FUN_overlay_12__02124430 @ 0x02124430 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02124430 @ 0x02124430 (code 0x2e, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Install dispatch table and clear three embedded buffers.
 * Field identities remain provisional.
 */
extern void *FUN_02001540(void *,int,unsigned int);
unsigned int *FUN_overlay_12__02124430(unsigned int *p) {*p=0x0213dc1c;FUN_02001540(p+1,0,8);FUN_02001540(p+3,0,16);FUN_02001540(p+7,0,64);return p;}
