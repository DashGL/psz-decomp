// FUN_overlay_11__0211ff3c @ 0x0211ff3c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211ff3c @ 0x0211ff3c (code 0x16, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize base, install derived dispatch and clear word +2be4; return self.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_11__02121100(void *);
void *FUN_overlay_11__0211ff3c(char *self) { FUN_overlay_11__02121100(self); *(unsigned int *)self=0x021245b0; *(unsigned int *)(self+0x2be4)=0; return self; }
