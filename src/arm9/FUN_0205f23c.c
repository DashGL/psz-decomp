// FUN_0205f23c @ 0x0205f23c (0x60, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205f23c @ 0x0205f23c (inventory code 0x5c, arm)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 228.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b228/0205f23c.txt.
 */
extern unsigned int FUN_0205e35c(void);extern void FUN_02064dd8(unsigned int,const void *,void *,unsigned int),FUN_0206552c(const void *,void *,unsigned int);void FUN_0205f23c(const void *source,unsigned int offset,unsigned int size){unsigned int base=FUN_0205e35c(),channel=*(unsigned int *)0x020f96e4;if(channel!=~0u&&size>48)FUN_02064dd8(channel,source,(void *)(base+offset),size);else FUN_0206552c(source,(void *)(base+offset),size);}
