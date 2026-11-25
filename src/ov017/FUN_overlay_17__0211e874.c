// FUN_overlay_17__0211e874 @ 0x0211e874 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211e874 @ 0x0211e874 (code 0x2a, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Restore table, release optional data, destroy base and free receiver.
 * Field identities remain provisional.
 */
extern void FUN_020ba8c4(void *);
extern void *FUN_overlay_17__0211fb5c(void *);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_17__0211e874(unsigned int *p) {p[0]=0x02124fa8;if(p[0x2be4/4]) {FUN_020ba8c4((void *)p[0x2be4/4]);p[0x2be4/4]=0;}FUN_overlay_17__0211fb5c(p);FUN_020ba8ac(p);return p;}
