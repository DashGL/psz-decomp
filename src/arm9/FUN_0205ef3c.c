// FUN_0205ef3c @ 0x0205ef3c (0x60, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205ef3c @ 0x0205ef3c (inventory code 0x5c, arm)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 228.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b228/0205ef3c.txt.
 */
extern unsigned int FUN_0205e0c4(void);extern void FUN_02064e48(unsigned int,const void *,void *,unsigned int),FUN_020654dc(const void *,void *,unsigned int);void FUN_0205ef3c(const void *source,unsigned int offset,unsigned int size){unsigned int base=FUN_0205e0c4(),channel=*(unsigned int *)0x020f96e4;if(channel!=~0u&&size>28)FUN_02064e48(channel,source,(void *)(base+offset),size);else FUN_020654dc(source,(void *)(base+offset),size);}
