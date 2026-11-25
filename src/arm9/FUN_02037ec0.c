// FUN_02037ec0 @ 0x02037ec0 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037ec0 @ 0x02037ec0 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/02037ec0.txt.
 */
extern void FUN_02037e2c(void *);extern void FUN_02037aa0(void *);extern void FUN_0200c530(void *,unsigned int,unsigned int,void *);
void *FUN_02037ec0(char *s){*(unsigned int *)s=0x020f701c;FUN_02037e2c(s);FUN_02037aa0(s);if(*(void **)(s+12)){FUN_0200c530(*(void **)(s+12),16,8,(void *)0x02050c41);*(void **)(s+12)=0;}if(*(void **)(s+8)){FUN_0200c530(*(void **)(s+8),20,8,(void *)0x02037a01);*(void **)(s+8)=0;}if(*(void **)(s+4)){FUN_0200c530(*(void **)(s+4),28,8,(void *)0x02033949);*(void **)(s+4)=0;}return s;}
