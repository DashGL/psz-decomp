// FUN_0205ed14 @ 0x0205ed14 (0x58, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205ed14 @ 0x0205ed14 (inventory code 0x54, arm)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 227.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b227/0205ed14.txt.
 */
extern void FUN_02064dd8(unsigned int,const void *,void *,unsigned int),FUN_0206552c(const void *,void *,unsigned int);void FUN_0205ed14(const void *source,unsigned int offset,unsigned int size){unsigned int channel=*(unsigned int *)0x020f96e4;if(channel!=~0u&&size>48)FUN_02064dd8(channel,source,(void *)(0x7000400+offset),size);else FUN_0206552c(source,(void *)(0x7000400+offset),size);}
