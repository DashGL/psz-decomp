// FUN_020a7490 @ 0x020a7490 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020a7490 @ 0x020a7490 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Create transition operation and set actor state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a7490.txt.
 */
extern int UNK_02101dd4;extern void *FUN_02096488(void),*FUN_020ba918(unsigned int);extern int FUN_020967a4(void *);extern void FUN_020c5018(void *,int,int,int,int,int),FUN_020a73a0(void *,int);void FUN_020a7490(char *s,int arg){int kind;void *p;if(FUN_020967a4(FUN_02096488())>0)kind=11;else kind=10;p=FUN_020ba918(56);if(p)FUN_020c5018(p,kind,(*(int **)(s+252))[3],arg,UNK_02101dd4,0);*(int *)(s+316)=3;FUN_020a73a0(s,4);}
