// FUN_0207f4fc @ 0x0207f4fc (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f4fc @ 0x0207f4fc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset 16-byte record at +4, then two 8-byte records at +14.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f4fc.txt.
 */
extern void FUN_0207f4d4(void *), FUN_0207f4e4(void *);
void FUN_0207f4fc(char *self) { int i; FUN_0207f4d4(self+4); for(i=0;i<2;i++) FUN_0207f4e4(self+20+8*i); }
