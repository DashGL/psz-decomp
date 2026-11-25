// FUN_02038700 @ 0x02038700 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02038700 @ 0x02038700 (inventory code 0x6a, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 44.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b44/02038700.txt.
 */
extern char *FUN_0204225c(void *,int);extern void FUN_02033dec(void *,void *,unsigned int);extern void FUN_020424fc(void *,int,int);
int FUN_02038700(char *s,int value,int mode){void *m=*(void **)0x02108c84;void *object=*(void **)(s+140);if(object&&m){char *p=FUN_0204225c(object,0);if(p){if(mode>0){*(unsigned int *)(p+4)|=32;*(unsigned int *)(p+40)=(*(unsigned int *)(p+40)&4095)|((unsigned int)mode<<24);}else *(unsigned int *)(p+4)&=~32u;}FUN_02033dec(m,*(void **)(s+140),*(unsigned short *)(s+236));FUN_020424fc(*(void **)(s+140),0,value);return 1;}return 0;}
