// FUN_0207c6f0 @ 0x0207c6f0 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207c6f0 @ 0x0207c6f0 (inventory code 0x74, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance finite spawn sequence and create effect descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207c6f0.txt.
 */
typedef struct {int v[3];} Vec;extern void FUN_0203666c(void *);extern void *FUN_02046d94(void *,int,int);int FUN_0207c6f0(char *s){int desc[25];if(!*(int *)(s+328)){(*(int *)(s+312))++;if(*(int *)(s+308)>*(int *)(s+312)){FUN_0203666c(desc);*(Vec *)((char *)desc+32)=*(Vec *)(s+92);desc[22]=*(int *)(s+232);desc[21]=21;return FUN_02046d94(desc,*(int *)(s+320),*(int *)(s+312))!=0;}*(int *)(s+328)=1;}return 0;}
