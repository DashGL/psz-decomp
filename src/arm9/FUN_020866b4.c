// FUN_020866b4 @ 0x020866b4 (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020866b4 @ 0x020866b4 (inventory code 0xa6, thumb)
// check: 2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read actor or object position through category-specific lookup.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020866b4.txt.
 */
typedef struct {int x,y,z;} V;typedef void (*Read)(V *,void *);extern void *UNK_02108cf4;extern int FUN_02078188(int),FUN_02078198(int),FUN_020781b0(int),FUN_0203bf3c(void *);extern void *FUN_020352a4(void *,int);extern char *FUN_02039200(void *),*FUN_020352c0(void *),*FUN_0209a4b4(void *);extern void FUN_020345f0(void *,void *);int FUN_020866b4(int id,V *out){V a,b;char *p;if(FUN_02078188(id)){p=FUN_02039200(FUN_020352a4(UNK_02108cf4,id));if(p && FUN_0203bf3c(p)){FUN_020345f0(&a,p+156);*out=a;return 1;}}else if(FUN_02078198(id)){p=FUN_020352c0(FUN_020352a4(UNK_02108cf4,id));if(p){*out=*(V *)(p+56);return 1;}}else if(FUN_020781b0(id)){p=FUN_0209a4b4(FUN_020352a4(UNK_02108cf4,id));if(p){(*(Read **)p)[7](&b,p);*out=b;return 1;}}return 0;}
