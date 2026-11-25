// FUN_02096ab8 @ 0x02096ab8 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02096ab8 @ 0x02096ab8 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset mapped entities and clear manager state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096ab8.txt.
 */
extern void *FUN_020856bc(int);extern void FUN_020959f8(void *,int),FUN_02098414(void *),FUN_02098444(void *),FUN_02098458(void *);void FUN_02096ab8(char *self){int i;for(i=0;i<*(int *)(self+4);i++){void *p=FUN_020856bc(*(int *)(self+8+8*i));if(p)FUN_020959f8(p,0);}if(*(void **)(self+32)){FUN_02098414(*(void **)(self+32));FUN_02098444(*(void **)(self+32));FUN_02098458(*(void **)(self+32));}}
