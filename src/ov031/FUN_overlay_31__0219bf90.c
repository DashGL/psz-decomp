// FUN_overlay_31__0219bf90 @ 0x0219bf90 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219bf90 @ 0x0219bf90 (code and checked extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31, 2026-11-04: use owner field +34 as the selected
 * value through 02037910, then set owner +2c bit zero to prevent subsequent
 * updates through that helper. Full nine-instruction body decoded from ROM;
 * resident callee reads only r0/r1. Object and field identities provisional.
 */
extern void FUN_02037910(void *,unsigned int);
void FUN_overlay_31__0219bf90(unsigned int *self) {
    FUN_02037910(self,self[13]);
    self[11]|=1;
}
