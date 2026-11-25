// FUN_020a6e68 @ 0x020a6e68 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020a6e68 @ 0x020a6e68 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply selected saved entry then emit notification and advance mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a6e68.txt.
 */
extern void *FUN_020a5240(void),*FUN_020a9834(void *,int);extern int FUN_020a9830(void *);extern void FUN_020a5298(void *,void *),FUN_020c193c(int,int,int,int,int),FUN_020a5148(void *,int);void FUN_020a6e68(char *s){int index=*(int *)(s+212)-7;if(FUN_020a9830(FUN_020a5240())>index){void *p=FUN_020a9834(FUN_020a5240(),index);if(p){FUN_020a5298(s,p);FUN_020c193c(0,17,0,0,-1);FUN_020a5148(s,3);}}}
