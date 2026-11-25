// FUN_020384e4 @ 0x020384e4 (0xd0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020384e4 @ 0x020384e4 (inventory code 0xc2, thumb)
// check: 2.0/sp2p3 target=0xd0 candidate=0xd0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 71.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b71/020384e4.txt.
 */
extern char *FUN_0204225c(void *,int);extern void FUN_02033e0c(void *,void *,unsigned int,unsigned int);extern void FUN_020424fc(void *,int,unsigned int);
int FUN_020384e4(char *s,int index,unsigned int arg,unsigned int delay,int mode){void *m=*(void **)0x02108c84,*obj=*(void **)(s+140);if(obj&&m&&*(void **)(s+144)&&index>=0&&index<22&&(*(unsigned int *)(s+232)-4)<=1){char *p=FUN_0204225c(obj,0);if(p){if(mode>0){*(unsigned int *)(p+4)|=32;*(unsigned int *)(p+40)=(*(unsigned int *)(p+40)&4095)|0x4000000;}else *(unsigned int *)(p+4)&=~32;}FUN_02033e0c(m,*(void **)(s+140),*(unsigned short *)(*(char **)(s+144)+4+2*index),65535);if(!delay){FUN_020424fc(*(void **)(s+140),0,arg);*(unsigned int *)(s+228)=0;}else{FUN_020424fc(*(void **)(s+140),0,0);*(unsigned int *)(s+228)=0u-delay;}*(int *)(s+208)=index;*(int *)(s+232)=5;return 1;}return 0;}
