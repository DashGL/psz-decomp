// FUN_0207a44c @ 0x0207a44c (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch20-manifest.json; original draft retained for referenced provenance.
// FUN_0207a44c @ 0x0207a44c (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct moving effect with query bounds and copied transform.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207a44c.txt.
 */
extern char UNK_020fa420[];extern void FUN_0204734c(void *),FUN_020bf680(void *,void *,int),FUN_020c0488(void *),FUN_02047798(void *,void *);void *FUN_0207a44c(char *s){int p[2];FUN_0204734c(s);*(void **)s=UNK_020fa420;*(int *)(s+260)=5;*(int *)(s+264)=-1;*(int *)(s+268)=0;*(int *)(s+272)=0;*(int *)(s+276)=0;*(int *)(s+280)=0;*(short *)(s+284)=0;*(short *)(s+286)=0;*(int *)(s+376)=-1;p[0]=*(int *)(s+92);p[1]=*(int *)(s+100);FUN_020bf680(s+288,p,2048);FUN_020c0488(s+324);FUN_02047798(s+336,s+288);*(int *)(s+332)=4096;return s;}
