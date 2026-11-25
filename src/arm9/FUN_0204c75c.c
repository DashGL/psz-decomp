// FUN_0204c75c @ 0x0204c75c (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c75c @ 0x0204c75c (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 37.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b37/0204c75c.txt.
 */
extern void *FUN_0204225c(void *,int);extern unsigned int FUN_02046bc8(void *);extern void FUN_02046b94(void *,unsigned int);extern void FUN_02046be0(void *);extern void FUN_02046bdc(void *,unsigned int);
void FUN_0204c75c(char *s) {if(*(void **)(s+48)){void *p=FUN_0204225c(*(void **)(s+48),0);if(p){FUN_02046b94(p,FUN_02046bc8(p)-1);FUN_02046be0(p);FUN_02046bdc(p,0u-*(unsigned int *)(s+76));*(unsigned int *)(s+256)&=~2u;*(unsigned int *)(s+256)|=4;*(int *)(s+288)=0;}}}
