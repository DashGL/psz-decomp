// FUN_020a52e0 @ 0x020a52e0 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020a52e0 @ 0x020a52e0 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check two resource fields and input mask before readiness helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a52e0.txt.
 */
extern int FUN_020bbf6c(unsigned int),FUN_020a5310(void *); int FUN_020a52e0(unsigned int *self) { if(!self[17]) return 0; if(!self[18]) return 0; if(FUN_020bbf6c(8)) return FUN_020a5310(self); return 0; }
