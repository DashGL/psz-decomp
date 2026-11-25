// FUN_overlay_9__0211f870 @ 0x0211f870 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f870 @ 0x0211f870 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Restore receiver table and conditionally release input-free resident singleton.
 * Field identities remain provisional.
 */
extern void FUN_020907f8(void);
void *FUN_overlay_9__0211f870(unsigned int *p) {p[0]=0x02121008;if(p[4])FUN_020907f8();return p;}
