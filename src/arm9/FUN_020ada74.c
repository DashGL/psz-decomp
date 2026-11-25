// FUN_020ada74 @ 0x020ada74 (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_020ada74 @ 0x020ada74 (inventory code 0x90, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve actor interaction through UI, attached object and action fallback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ada74.txt.
 */
extern void *UNK_02108c68;extern void *FUN_02077930(void),*FUN_0204f3b8(void);extern int FUN_02077d50(void *),FUN_0204f464(void *),FUN_020b491c(void),FUN_0208f2f8(void *),FUN_020acb2c(void *,int,int);extern void FUN_0204f4d4(void *),FUN_02033400(void *,int);int FUN_020ada74(char *s){int state=FUN_02077d50(FUN_02077930());if(FUN_0204f464(FUN_0204f3b8())){FUN_0204f4d4(FUN_0204f3b8());*(int *)(s+592)|=2;*(int *)(s+612)=0;return 1;}if(!state){if(FUN_020b491c()){FUN_02033400(UNK_02108c68,8);return 1;}if(FUN_0208f2f8(s)){*(int *)(s+612)=0;return 1;}if(FUN_020acb2c(s,0,0))return 1;}else if(FUN_020acb2c(s,0,0))return 1;return 0;}
