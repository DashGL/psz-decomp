// FUN_overlay_15__021362f8 @ 0x021362f8 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__021362f8 @ 0x021362f8 (code 0xa, pool extent 0xa, thumb)
// check: vers=2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* ABI proof: all five raw callers use surfaces from 02135f98 -> 02017d14.
 * Table020ebfac slot+4 is ARM02017768: self/color only; scalar fill word in r0.
 * Evidence: notes/sessions/coverage-root-2026-11-04-abi-review6.md.
 * USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Dispatch using callback at word +4 of table pointer at receiver +14; pass receiver and second argument.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_15__021362f8(char *self,unsigned int arg) { unsigned int (**table)(void *,unsigned int)=*(unsigned int (***)(void *,unsigned int))(self+20); return table[1](self,arg); }
