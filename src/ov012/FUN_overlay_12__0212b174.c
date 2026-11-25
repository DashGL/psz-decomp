// FUN_overlay_12__0212b174 @ 0x0212b174 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212b174 @ 0x0212b174 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reset existing global receiver defaults around state-four activation.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212a934(void *);
extern void FUN_overlay_12__02131fd0(void *,int);
void FUN_overlay_12__0212b174(void) {unsigned int *p=*(unsigned int **)0x0213f2c0;if(p){FUN_overlay_12__0212a934(p);p[16]=4;FUN_overlay_12__02131fd0(p,1);FUN_overlay_12__0212a934(p);}}
