// FUN_02074770 @ 0x02074770 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074770 @ 0x02074770 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear session state and reserve slots for additional members.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074770.txt.
 */
extern void FUN_020656b8(void *,int,unsigned int); extern int FUN_02073fb0(void *),FUN_020c0904(int,int); void FUN_02074770(char *self) { FUN_020656b8(self+352,0,20); if(*(int *)(self+60)==2) { *(int *)(self+364)=FUN_02073fb0(self)-1; if(*(int *)(self+364)>=1) FUN_020c0904(*(int *)(self+364),0); } }
