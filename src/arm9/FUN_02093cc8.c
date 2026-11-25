// FUN_02093cc8 @ 0x02093cc8 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02093cc8 @ 0x02093cc8 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Select valid stage and request interface transition.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093cc8.txt.
 */
extern void *UNK_02108c5c;extern void *FUN_02031a74(void),*FUN_02031c74(void *);extern int FUN_02094270(void *),FUN_02093f3c(void *,int);extern void FUN_02032838(void *,void *),FUN_02031418(void *,int);int FUN_02093cc8(char *s,int stage,int option){void *p=FUN_02031c74(FUN_02031a74());if(p){int count=FUN_02094270(p);if(stage>0 && stage<count){FUN_02032838(s+16,s+20);s[17]=stage;s[18]=0;if(FUN_02093f3c(s+16,0))return 1;if(UNK_02108c5c){FUN_02031418(UNK_02108c5c,option);return 1;}}}return 0;}
