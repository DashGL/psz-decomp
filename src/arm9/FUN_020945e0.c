// FUN_020945e0 @ 0x020945e0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020945e0 @ 0x020945e0 (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send periodic entity update before applying state change.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020945e0.txt.
 */
extern void FUN_0208d594(void *,int,void *,int,unsigned int,unsigned int),FUN_0206f150(void *,int,int);void FUN_020945e0(char *s,int mode){if(s){if((int)*(unsigned short *)(s+312)%10==0)FUN_0208d594((void *)0x0211a5c4,*(int *)(s+252),s+156,mode,*(unsigned short *)(s+318),*(unsigned short *)(s+194));FUN_0206f150(s,mode,*(int *)(s+268));}}
