// FUN_020966dc @ 0x020966dc (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020966dc @ 0x020966dc (inventory code 0x72, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Remove actor slot and compact remaining eight-byte records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020966dc.txt.
 */
extern char UNK_0211a51c[];extern int FUN_02084be8(void *),FUN_020967f0(void *,int),FUN_02084e9c(int);extern void FUN_02096934(void *,int),FUN_02097d5c(void *,void *,int);void FUN_020966dc(char *s,int index){int slot;if(FUN_02084be8(UNK_0211a51c) && *(int *)s){FUN_02096934(s,index);*(unsigned short *)(s+38)&=~(1U<<index);slot=FUN_020967f0(s,index);if(slot<*(int *)(s+4)){FUN_02084e9c(*(int *)(s+8+8*slot));if(*(void **)(s+32))FUN_02097d5c(*(void **)(s+32),s+8+8*slot,1);(*(int *)(s+4))--;}for(;slot<*(int *)(s+4);slot++){char *p=s+8*slot;*(int *)(p+8)=*(int *)(p+16);*(int *)(p+12)=*(int *)(p+20);}}}
