// FUN_020a15a4 @ 0x020a15a4 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020a15a4 @ 0x020a15a4 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update one of twelve records and set corresponding dirty bit on success.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a15a4.txt.
 */
extern int FUN_020a15d0(void *,int,unsigned int); void FUN_020a15a4(char *self,int value,unsigned int id,int slot) { if(slot>=0 && slot<12 && FUN_020a15d0(self+60*slot,value,id)) *(unsigned int *)(self+720)|=1u<<slot; }
