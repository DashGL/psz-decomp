// FUN_overlay_6__0211eaa0 @ 0x0211eaa0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch56.json; original draft retained for referenced provenance.
// FUN_overlay_6__0211eaa0 @ 0x0211eaa0 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy nine fixed-size array elements using the concrete empty destructor callback.
 * Field identities remain provisional.
 */
typedef void (*Dtor)(void *);extern void FUN_0200c4d4(void *,int,int,Dtor);void *FUN_overlay_6__0211eaa0(unsigned char *self){FUN_0200c4d4(self+8,9,288,(Dtor)0x0211e68d);return self;}
