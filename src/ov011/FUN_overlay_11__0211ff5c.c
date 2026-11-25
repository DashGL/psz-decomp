// FUN_overlay_11__0211ff5c @ 0x0211ff5c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211ff5c @ 0x0211ff5c (code 0x1e, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Restore receiver table and release extended owned buffer, clearing its slot.
 * Field identities remain provisional.
 */
extern void FUN_020ba8c4(void *);
void *FUN_overlay_11__0211ff5c(unsigned int *p) {p[0]=0x021245b0;if(p[2809]){FUN_020ba8c4((void *)p[2809]);p[2809]=0;}return p;}
