// FUN_0205ec10 @ 0x0205ec10 (0x58, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205ec10 @ 0x0205ec10 (inventory code 0x54, arm)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 227.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b227/0205ec10.txt.
 */
extern void FUN_02064e48(unsigned int,const void *,void *,unsigned int),FUN_020654dc(const void *,void *,unsigned int);void FUN_0205ec10(const void *source,unsigned int offset,unsigned int size){unsigned int channel=*(unsigned int *)0x020f96e4;if(channel!=~0u&&size>28)FUN_02064e48(channel,source,(void *)(0x5000200+offset),size);else FUN_020654dc(source,(void *)(0x5000200+offset),size);}
