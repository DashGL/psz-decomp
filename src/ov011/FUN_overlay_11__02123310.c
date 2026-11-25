// FUN_overlay_11__02123310 @ 0x02123310 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__02123310 @ 0x02123310 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Install dispatch pointer then run input-free module singleton cleanup; return self.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_11__0211e964(void);
void *FUN_overlay_11__02123310(unsigned int *self) { self[0]=0x02124a20; FUN_overlay_11__0211e964(); return self; }
