// FUN_020b23a0 @ 0x020b23a0 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020b23a0 @ 0x020b23a0 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum remaining capacity across resolved entry identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b23a0.txt.
 */
extern unsigned char *FUN_020b23d4(void *,int);int FUN_020b23a0(int *self,void *table){int count=0,i;for(i=0;i<self[7];i++){unsigned char *p=FUN_020b23d4(table,self[i]);if(p && p[5]<2)count+=2-p[5];}return count;}
