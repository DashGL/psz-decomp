// FUN_0207bf38 @ 0x0207bf38 (0x98, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_0207bf38 @ 0x0207bf38 (inventory code 0x94, thumb)
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize derived actor counters and vector state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207bf38.txt.
 */
extern char UNK_020fa600[];extern void FUN_0204734c(void *),FUN_02035408(void *,int,int,int);void *FUN_0207bf38(char *s){FUN_0204734c(s);*(void **)s=UNK_020fa600;FUN_02035408(s+260,0,0,0);*(int *)(s+272)=1;*(int *)(s+276)=1;*(int *)(s+280)=0;*(int *)(s+284)=0;*(int *)(s+288)=0;*(short *)(s+292)=0;*(short *)(s+294)=0;*(int *)(s+296)=0;*(int *)(s+300)=0;*(int *)(s+304)=0;*(int *)(s+308)=0;*(int *)(s+312)=0;*(short *)(s+316)=0;*(int *)(s+320)=0;*(int *)(s+324)=0;*(int *)(s+328)=0;*(int *)(s+332)=0;*(int *)(s+336)=-1;*(int *)(s+340)=0;return s;}
