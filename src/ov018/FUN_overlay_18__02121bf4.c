// FUN_overlay_18__02121bf4 @ 0x02121bf4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__02121bf4 @ 0x02121bf4 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Select coordinate record one and set coordinates to one and zero.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_18__02121808(void *);
extern void FUN_overlay_18__02121c18(void *,int);
extern void FUN_overlay_18__02121c28(void *,int);
void FUN_overlay_18__02121bf4(unsigned int *p) {p[37]=1;FUN_overlay_18__02121c18(FUN_overlay_18__02121808(p),1);FUN_overlay_18__02121c28(FUN_overlay_18__02121808(p),0);}
