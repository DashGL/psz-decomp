// FUN_02077bec @ 0x02077bec (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077bec @ 0x02077bec (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch pending value when not busy, then clear pending field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077bec.txt.
 */
extern void FUN_02077cd8(void *,unsigned int,int,int); void FUN_02077bec(char *self) { unsigned int value=*(unsigned int *)(self+264); if(value && *(unsigned int *)(self+220)==0) { FUN_02077cd8(self,value,0,0); *(unsigned int *)(self+264)=0; } }
