// FUN_020380d4 @ 0x020380d4 (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020380d4 @ 0x020380d4 (inventory code 0x76, thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 118.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b118/020380d4.txt.
 */
extern void FUN_02038154(void *),FUN_02042710(void *,unsigned int,unsigned int,unsigned int),FUN_02033f30(void *,unsigned int,unsigned int);extern void *FUN_02033d60(void *,unsigned int,int,unsigned int);extern unsigned int FUN_02038464(void *);void FUN_020380d4(char *s){void *manager=*(void **)0x02108c84;if(*(void **)(s+140))FUN_02038154(s);if(manager){*(void **)(s+140)=FUN_02033d60(manager,*(unsigned short *)(s+148),2,65535);if(*(void **)(s+140)){unsigned int scale;*(unsigned int *)(*(char **)(s+140)+24)&=~1u;*(unsigned int *)(s+220)=FUN_02038464(s+36);scale=*(unsigned int *)(s+220);FUN_02042710(*(void **)(s+140),scale,scale,scale);FUN_02033f30(manager,*(unsigned short *)(s+148),*(unsigned short *)(s+150));}}}
