// FUN_02076494 @ 0x02076494 (0x6e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076494 @ 0x02076494 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x6e candidate=0x6e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Find attached actor and mark it for removal or fallback cleanup.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076494.txt.
 */
extern char *FUN_02075040(void *,int);extern void FUN_020472bc(void *),FUN_0204b4d4(void *),FUN_02075068(void *,int);void FUN_02076494(void *s,char *desc,int *arg){char *p;if(**(signed char **)(desc+12)==0){p=FUN_02075040(s,arg[1]);if(!p){FUN_020472bc(p);return;}*(int *)(p+228)|=8;*(int *)(p+180)=5;FUN_0204b4d4(p);}else{p=FUN_02075040(s,arg[1]);if(!p){FUN_02075068(s,arg[1]);return;}*(int *)(p+228)|=8;*(int *)(p+180)=5;FUN_0204b4d4(p);}}
