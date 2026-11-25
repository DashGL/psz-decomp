// FUN_02093ff4 @ 0x02093ff4 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_02093ff4 @ 0x02093ff4 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve selection from current save and singleton parameters.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093ff4.txt.
 */
extern void *FUN_02031a74(void),*FUN_02031c74(void *),*FUN_02086e3c(void);extern char *FUN_020870c4(void *);extern int FUN_02031c44(void *),FUN_02094288(void *,int,int,int,int);int FUN_02093ff4(int kind,int index){int result=-1;if(kind!=-1 && FUN_02031c44(FUN_02031a74())){void *p=FUN_02031c74(FUN_02031a74());if(p){char *settings=FUN_020870c4(FUN_02086e3c());result=FUN_02094288(p,kind,*(int *)(settings+3384),*(int *)(settings+3388),index);}}return result;}
