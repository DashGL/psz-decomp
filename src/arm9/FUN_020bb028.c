// FUN_020bb028 @ 0x020bb028 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020bb028 @ 0x020bb028 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run helper on second argument only when receiver mode one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bb028.txt.
 */
extern int FUN_020bbc80(void *); int FUN_020bb028(unsigned int *self,void *arg) { if(self[19]==1) return FUN_020bbc80(arg); return 0; }
