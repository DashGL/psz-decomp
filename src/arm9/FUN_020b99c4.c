// FUN_020b99c4 @ 0x020b99c4 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020b99c4 @ 0x020b99c4 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Finish active action and clear nested action state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b99c4.txt.
 */
extern void FUN_02098aa4(void *,int,int),FUN_02098a54(void *);void FUN_020b99c4(char *self){if(*(short *)(self+4)==8){if(*(int *)(self+8)>0){char *p=*(char **)(self+12);FUN_02098aa4(*(void **)(p+8),*(int *)(p+12),0);}}else if(*(int *)(self+8)>0)FUN_02098a54(*(void **)(*(char **)(self+12)+8));*(int *)(*(char **)(*(char **)(self+12)+8)+4)=0;}
