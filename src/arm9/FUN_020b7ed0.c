// FUN_020b7ed0 @ 0x020b7ed0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020b7ed0 @ 0x020b7ed0 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check embedded kind after validating object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7ed0.txt.
 */
extern int FUN_020375f0(void *),FUN_0207f770(void *); int FUN_020b7ed0(char *self,int kind) { if(self && !FUN_020375f0(self)) { self+=100; if(self) return FUN_0207f770(self)==kind; } return 0; }
