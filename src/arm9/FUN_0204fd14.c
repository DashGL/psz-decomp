// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
// Typed record evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned int w[8];}Words_0204fd14;typedef struct{unsigned short h[5];}Halves_0204fd14;typedef struct{unsigned int w[3];}Vector_0204fd14;
// FUN_0204fd14 @ 0x0204fd14 (inventory code 0xf4, thumb)
// check: 2.0/sp2p3 target=0xf4 candidate=0xf4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 135.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b135/0204fd14.txt.
 */
extern void FUN_0204b398(void *),FUN_020bf680(void *,void *,unsigned int),FUN_020c0488(void *);void FUN_0204fd14(char *s,unsigned int delay,unsigned int *desc,unsigned int *position,unsigned int scale){unsigned int pair[2],shape[9];int i;FUN_0204b398(s);*(unsigned int *)(s+256)=delay;*(unsigned int *)(s+260)=0;*(unsigned int *)(s+264)=0;*(Vector_0204fd14*)(s+92)=*(const Vector_0204fd14*)position;((unsigned int *)(s+268))[0]=desc[0];((unsigned int *)(s+268))[1]=desc[1];((unsigned int *)(s+268))[2]=desc[2];((unsigned int *)(s+268))[3]=desc[3];((unsigned int *)(s+268))[4]=desc[4];((unsigned int *)(s+268))[5]=desc[5];((unsigned int *)(s+268))[6]=desc[6];((unsigned int *)(s+268))[7]=desc[7];((unsigned int *)(s+268))[8]=desc[8];((unsigned int *)(s+268))[9]=desc[9];((unsigned int *)(s+268))[10]=desc[10];((unsigned int *)(s+268))[11]=desc[11];((unsigned int *)(s+268))[12]=desc[12]; pair[0]=position[0];pair[1]=position[2];FUN_020bf680(shape,pair,scale);FUN_020c0488(s+320);*(unsigned int *)(s+332)=shape[0];*(Words_0204fd14*)(s+336)=*(const Words_0204fd14*)(shape+1);*(unsigned int *)(s+328)=4096;*(unsigned int *)(s+372)=~0u;*(unsigned int *)(s+272)=*(unsigned int *)(s+372);*(unsigned int *)(s+276)=*(unsigned int *)(s+96);}
