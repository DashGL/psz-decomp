// FUN_020b3044 @ 0x020b3044 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020b3044 @ 0x020b3044 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize fields, set global flag and request manager slot using shared constant.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3044.txt.
 */
extern void FUN_02090848(unsigned int); extern void *FUN_020c1fc8(void); extern int FUN_020c2438(void *,unsigned int,unsigned int,int); void *FUN_020b3044(int *self) { unsigned int value; self[0]=-1; self[1]=0; FUN_02090848(16); value=*(unsigned int *)0x020fc6f8; self[0]=FUN_020c2438(FUN_020c1fc8(),value,value,2); return self; }
