// FUN_020b2718 @ 0x020b2718 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020b2718 @ 0x020b2718 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Process and compact while both owned structures are present and progress continues.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2718.txt.
 */
extern int FUN_020b2740(void *),FUN_020b2648(void *); void FUN_020b2718(void **self) { if(self[1] && self[0]) while(FUN_020b2740(self)) if(!FUN_020b2648(self[1])) break; }
