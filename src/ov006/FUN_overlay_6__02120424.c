// FUN_overlay_6__02120424 @ 0x02120424 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_6__02120424 @ 0x02120424 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy the embedded element array and owned allocation, then return the receiver.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_6__0211eaa0(void *);extern void *FUN_overlay_6__0211ecb4(void *);void *FUN_overlay_6__02120424(unsigned char *self){FUN_overlay_6__0211eaa0(self+920);FUN_overlay_6__0211ecb4(self+72);return self;}
