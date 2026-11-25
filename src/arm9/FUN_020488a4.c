// FUN_020488a4 @ 0x020488a4 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020488a4 @ 0x020488a4 (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 53.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b53/020488a4.txt.
 */
extern void FUN_0204734c(void *);extern void FUN_02035408(void *,int,int,int);extern void FUN_020c0488(void *);
char *FUN_020488a4(char *s){FUN_0204734c(s);*(unsigned int *)s=0x020f9114;*(int *)(s+260)=-1;FUN_02035408(s+264,0,0,0);*(int *)(s+276)=0;*(int *)(s+280)=0;*(int *)(s+284)=0;*(short *)(s+288)=0;*(int *)(s+292)=0;*(int *)(s+296)=0;*(short *)(s+300)=0;*(int *)(s+304)=0;*(int *)(s+308)=0;FUN_020c0488(s+312);*(int *)(s+364)=1;*(int *)(s+368)=6;*(int *)(s+372)=0;*(int *)(s+376)=0;*(int *)(s+380)=0;return s;}
