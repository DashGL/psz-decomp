// FUN_020a1a54 @ 0x020a1a54 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020a1a54 @ 0x020a1a54 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Begin flagged action and notify global manager once.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a1a54.txt.
 */
extern void FUN_02033418(void *,int,int),FUN_02030808(void *,int,int);void FUN_020a1a54(char *self){if(!(*(unsigned int *)(self+88)&1)){*(unsigned int *)(self+88)|=1;FUN_02033418(*(void **)0x02108c68,10,*(int *)(self+92)!=0);FUN_02030808(self+80,1,0);}}
