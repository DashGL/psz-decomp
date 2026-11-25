// FUN_overlay_5__0211e980 @ 0x0211e980 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch56.json; original draft retained for referenced provenance.
// FUN_overlay_5__0211e980 @ 0x0211e980 (code 0x12, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 5 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy two adjacent resource holders and return the original array pointer.
 * Field identities remain provisional.
 */
typedef void *(*Dtor)(void *);extern void FUN_0200c4d4(void *,int,int,Dtor);void *FUN_overlay_5__0211e980(void *self){FUN_0200c4d4(self,2,4,(Dtor)0x020c2b69);return self;}
