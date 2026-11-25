// FUN_0204c6c4 @ 0x0204c6c4 (0x98, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c6c4 @ 0x0204c6c4 (inventory code 0x90, thumb)
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 56.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b56/0204c6c4.txt.
 */
extern void *FUN_0204225c(void *,int);extern void FUN_02046b94(void *,unsigned int);extern void FUN_02046be0(void *);extern void FUN_02046bdc(void *,unsigned int);extern void FUN_02033e0c(void *,void *,unsigned int,unsigned int);extern char *FUN_0204daa8(unsigned int);extern unsigned int FUN_02046bc8(void *);
void FUN_0204c6c4(char *s,int enabled){void *obj=*(void **)(s+48);if(obj&&*(unsigned short *)(s+56)!=65535){void *p=FUN_0204225c(obj,0);if(p){void *m;FUN_02046b94(p,0);FUN_02046be0(p);FUN_02046bdc(p,*(unsigned int *)(s+76));m=*(void **)0x02108c84;if(m){FUN_02033e0c(m,obj,*(unsigned short *)(s+56),65535);*(unsigned int *)(s+256)|=2;if(enabled){char *q;*(unsigned int *)(s+256)|=4;*(unsigned int *)(s+288)=0;q=FUN_0204daa8(*(unsigned int *)(s+232));if(q){void *other=*(void **)(q+140);if(other){p=FUN_0204225c(other,0);if(p)*(unsigned int *)(s+288)=FUN_02046bc8(p);}}}}}}}
