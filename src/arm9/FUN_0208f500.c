// FUN_0208f500 @ 0x0208f500 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0208f500 @ 0x0208f500 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set transition flag, refresh eligible entity and dispatch update.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208f500.txt.
 */
extern void FUN_0206f090(void *,unsigned int),FUN_0208f398(void *,int,int,int);void FUN_0208f500(char *s,int a,int b,int c){if(s){*(unsigned int *)(s+248)|=128;if(*(int *)(s+576)!=9 && *(int *)(s+576)!=10)FUN_0206f090(s,*(unsigned short *)(s+192));}FUN_0208f398(s,a,b,c);}
