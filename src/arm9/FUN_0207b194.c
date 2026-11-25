// FUN_0207b194 @ 0x0207b194 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_0207b194 @ 0x0207b194 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize base and table, clear five consecutive words at +17c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207b194.txt.
 */
extern void FUN_0207a44c(void *);
void *FUN_0207b194(unsigned int *self) {
    FUN_0207a44c(self); self[0]=0x020fa640;
    self[95]=0; self[96]=0; self[97]=0; self[98]=0; self[99]=0;
    return self;
}
