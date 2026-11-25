// FUN_020b0eb4 @ 0x020b0eb4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b0eb4 @ 0x020b0eb4 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Report absence of child or its indexed helper result.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0eb4.txt.
 */
extern int FUN_02042418(void *,int); int FUN_020b0eb4(void **self) { if(self[8] && FUN_02042418(self[8],0)) return 0; return 1; }
