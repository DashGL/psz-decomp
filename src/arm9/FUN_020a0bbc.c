// FUN_020a0bbc @ 0x020a0bbc (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020a0bbc @ 0x020a0bbc (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release two registered handles and owned auxiliary buffer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0bbc.txt.
 */
extern void *FUN_0208f068(void);extern void FUN_0208efd4(void *,int),FUN_020ba8b4(void *);void FUN_020a0bbc(char *s){void *p=FUN_0208f068();if(p){if(*(int *)(s+4)>=0){FUN_0208efd4(p,*(int *)(s+4));*(int *)(s+4)=-1;}if(*(int *)(s+8)>=0){FUN_0208efd4(p,*(int *)(s+8));*(int *)(s+8)=-1;}}*(int *)(s+16)=0;if(*(void **)(s+20)){FUN_020ba8b4(*(void **)(s+20));*(void **)(s+20)=0;}}
