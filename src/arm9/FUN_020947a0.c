// FUN_020947a0 @ 0x020947a0 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020947a0 @ 0x020947a0 (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send periodic player movement event and reset timer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020947a0.txt.
 */
extern void FUN_0206f7b8(void *),FUN_0208d638(void *,int,void *,int,unsigned char);void FUN_020947a0(char *s){if(s && (int)*(unsigned short *)(s+314)%10==0){if(*(int *)(s+576)!=1)FUN_0206f7b8(s);FUN_0208d638((void *)0x0211a5c4,*(int *)(s+252),s+156,*(unsigned short *)(s+192),1);*(unsigned short *)(s+314)=0;}}
