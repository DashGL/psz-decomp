// FUN_02086868 @ 0x02086868 (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02086868 @ 0x02086868 (inventory code 0x84, thumb)
// check: 2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read actor heading through category-specific object lookup.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086868.txt.
 */
extern void *UNK_02108cf4;extern int FUN_02078188(int),FUN_02078198(int),FUN_020781b0(int),FUN_0203bf3c(void *);extern void *FUN_020352a4(void *,int);extern char *FUN_02039200(void *),*FUN_020352c0(void *),*FUN_0209a4b4(void *);int FUN_02086868(int id,unsigned short *out){char *p;if(FUN_02078188(id)){p=FUN_02039200(FUN_020352a4(UNK_02108cf4,id));if(p && FUN_0203bf3c(p)){*out=*(unsigned short *)(p+192);return 1;}}else if(FUN_02078198(id)){p=FUN_020352c0(FUN_020352a4(UNK_02108cf4,id));if(p){*out=*(unsigned short *)(p+68);return 1;}}else if(FUN_020781b0(id)){p=FUN_0209a4b4(FUN_020352a4(UNK_02108cf4,id));if(p){*out=(*(int (**)(void *))(*(char **)p+32))(p);return 1;}}return 0;}
