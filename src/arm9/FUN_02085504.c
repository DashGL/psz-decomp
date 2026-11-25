// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// Excluded-first inequality preserves the ROM comparison operand order.
// FUN_02085504 @ 0x02085504 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find last other peer with eligible numeric state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085504.txt.
 */
extern char *UNK_0211a52c;extern char *FUN_0208555c(int);int FUN_02085504(int excluded){int result=-1,i;if(UNK_0211a52c)for(i=0;i<4;i++){int offset=148*i,index=*(int *)(UNK_0211a52c+136+offset);if(excluded!=index){char *p=FUN_0208555c(index);if(p){int value=*(int *)(p+584);if(value>=0 && value<102400)result=*(int *)(UNK_0211a52c+136+offset);}}}return result;}
