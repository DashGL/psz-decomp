// FUN_0204772c @ 0x0204772c (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_0204772c @ 0x0204772c (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 44.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b44/0204772c.txt.
 */
extern void FUN_0204734c(void *);extern void FUN_020bf680(void *,void *,int);extern void FUN_020c0488(void *);extern void FUN_02047798(void *,void *);
void *FUN_0204772c(char *s){unsigned int pair[2];FUN_0204734c(s);*(unsigned int *)s=0x020f8fd4;*(int *)(s+260)=0;*(int *)(s+264)=0;*(int *)(s+268)=0;*(int *)(s+360)=-1;pair[0]=*(unsigned int *)(s+92);pair[1]=*(unsigned int *)(s+100);FUN_020bf680(s+272,pair,2048);FUN_020c0488(s+308);FUN_02047798(s+320,s+272);*(int *)(s+316)=4096;return s;}
