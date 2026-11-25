// FUN_overlay_23__02199a70 @ 0x02199a70 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_23__02199a70 @ 0x02199a70 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Install base table, release object resource and owned array before common base cleanup.
 * Field identities remain provisional.
 */
extern void FUN_020472bc(void *);
extern void FUN_overlay_23__0219a5d0(void *);
extern void *FUN_02035518(void *);
void *FUN_overlay_23__02199a70(unsigned int *p) {p[0]=0x0219d858;FUN_020472bc((void *)p[56]);FUN_overlay_23__0219a5d0(p);FUN_02035518(p);return p;}
