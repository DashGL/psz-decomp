// FUN_02095858 @ 0x02095858 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02095858 @ 0x02095858 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update strictly increasing positive count, preserving two forwarded helper flags.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095858.txt.
 */
extern void FUN_0203ba5c(void *,int,int,int); int FUN_02095858(char *self,int value,int a,int b) { if(value>0 && value>*(int *)(self+688)) { FUN_0203ba5c(self,value,a,b); *(int *)(self+688)=value; return 1; } return 0; }
