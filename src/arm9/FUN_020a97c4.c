// FUN_020a97c4 @ 0x020a97c4 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020a97c4 @ 0x020a97c4 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve history entry using signed ring remainder.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a97c4.txt.
 */
void *FUN_020a97c4(char *self,int index){int size=*(int *)(self+4),slot;if(*(int *)(self+16)<3)slot=(index+size+1)%size;else slot=(size+(index+*(int *)(self+20))-2)%size;return *(char **)(self+12)+772*slot;}
