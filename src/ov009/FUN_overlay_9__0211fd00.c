// FUN_overlay_9__0211fd00 @ 0x0211fd00 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211fd00 @ 0x0211fd00 (code 0x1c, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Restore table, conditionally release input-free singleton, then release receiver storage.
 * Field identities remain provisional.
 */
extern void FUN_020907f8(void);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_9__0211fd00(unsigned int *p) {p[0]=0x02121048;if(p[4])FUN_020907f8();FUN_020ba8ac(p);return p;}
