// FUN_overlay_26__021998e4 @ 0x021998e4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_26__021998e4 @ 0x021998e4 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26, 2026-11-04: initialize base, replace dispatch table,
 * return self. Both seven-instruction wrapper and six-instruction base
 * were decoded from this module. Base consumes only receiver, installs
 * resident table 020f6fb0 and clears words +4/+8. Table role provisional.
 */
extern void FUN_overlay_26__02198030(void *);
void *FUN_overlay_26__021998e4(unsigned int *self) { FUN_overlay_26__02198030(self); self[0]=0x0219b63c; return self; }
