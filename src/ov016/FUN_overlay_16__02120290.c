// FUN_overlay_16__02120290 @ 0x02120290 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_overlay_16__02120290 @ 0x02120290 (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Clean embedded subobject and return original receiver.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_16__02120b48(void *);
void *FUN_overlay_16__02120290(char *self) { FUN_overlay_16__02120b48(self+0x20); return self; }
