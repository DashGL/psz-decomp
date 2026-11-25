// FUN_020a95a4 @ 0x020a95a4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020a95a4 @ 0x020a95a4 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit five-argument operation with scaled duration and global player.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a95a4.txt.
 */
extern int FUN_020a9278(int); extern void FUN_0204e01c(int,int,int,int,unsigned int); void FUN_020a95a4(int kind,unsigned int duration) { char *p=*(char **)0x02108d04; if(p) { int id=*(int *)(p+252); int value=FUN_020a9278(kind); FUN_0204e01c(id,id,0,value,duration*122880); } }
