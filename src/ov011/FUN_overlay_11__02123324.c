// FUN_overlay_11__02123324 @ 0x02123324 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__02123324 @ 0x02123324 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch table, run input-free singleton cleanup, deallocate self and return original pointer.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_11__0211e964(void);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_11__02123324(unsigned int *self) { self[0]=0x02124a20; FUN_overlay_11__0211e964(); FUN_020ba8ac(self); return self; }
