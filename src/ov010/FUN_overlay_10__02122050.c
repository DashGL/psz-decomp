// FUN_overlay_10__02122050 @ 0x02122050 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_10__02122050 @ 0x02122050 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate object and forward incoming parameter to constructor only on successful allocation.
 * Field identities and high-level API contracts remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_10__021217e0(void *,unsigned int);
void *FUN_overlay_10__02122050(unsigned int value) { void *object=FUN_020ba894(124); if(object) return FUN_overlay_10__021217e0(object,value); return object; }
