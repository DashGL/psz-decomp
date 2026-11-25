// FUN_020b6248 @ 0x020b6248 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_020b6248 @ 0x020b6248 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build five sixteen-byte descriptors then pass them with fixed mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b6248.txt.
 */
extern int FUN_020b6200(void *,void *); extern unsigned int FUN_020b737c(void *,void *,int); unsigned int FUN_020b6248(void *self) { unsigned int descriptors[20]; FUN_020b6200(self,descriptors); return FUN_020b737c(self,descriptors,1); }
