// FUN_020385b4 @ 0x020385b4 (0xa8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020385b4 @ 0x020385b4 (inventory code 0x9e, thumb)
// check: 2.0/sp2p3 target=0xa8 candidate=0xa8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 62.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b62/020385b4.txt.
 */
extern char *FUN_0204225c(void *,int);extern void FUN_02033dec(void *,void *,unsigned int);extern void FUN_020424fc(void *,int,unsigned int);
int FUN_020385b4(char *s,int index,unsigned int arg,int mode){void *m=*(void **)0x02108c84,*obj=*(void **)(s+140);if(obj&&m&&*(void **)(s+144)&&index>=0&&index<22&&(*(unsigned int *)(s+232)-4)<=1){char *p=FUN_0204225c(obj,0);if(p){if(mode>0){*(unsigned int *)(p+4)|=32;*(unsigned int *)(p+40)=(*(unsigned int *)(p+40)&4095)|((unsigned int)mode<<24);}else *(unsigned int *)(p+4)&=~32;}FUN_02033dec(m,*(void **)(s+140),*(unsigned short *)(*(char **)(s+144)+4+2*index));FUN_020424fc(*(void **)(s+140),0,arg);*(int *)(s+208)=index;*(int *)(s+232)=4;return 1;}return 0;}
