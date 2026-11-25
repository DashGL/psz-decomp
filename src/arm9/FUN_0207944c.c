// FUN_0207944c @ 0x0207944c (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207944c @ 0x0207944c (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize paired display parameters and scaled offset.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207944c.txt.
 */
extern char UNK_020f2908[];extern void FUN_020794c4(void *,void *);void FUN_0207944c(char *s){FUN_020794c4(s+144,UNK_020f2908);*(int *)(s+152)=11264;*(int *)(s+156)=4096;FUN_020794c4(s+160,UNK_020f2908);*(int *)(s+168)=4880;*(int *)(s+172)=(int)(((long long)*(int *)(s+196)*5888+2048)>>12);*(int *)(s+108)=0;*(int *)(s+112)=0;*(int *)(s+116)=0;*(unsigned short *)(s+134)=0;*(int *)(s+192)=1;}
