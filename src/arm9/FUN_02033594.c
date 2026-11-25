// FUN_02033594 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02033594 @ 0x02033594 (inventory code 0x64, thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 116.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b116/02033594.txt.
 */
typedef struct{unsigned int w[3];} V;extern int FUN_020781b0(unsigned int);extern void *FUN_020352a4(void *,unsigned int),*FUN_02076fb0(void *),*FUN_0209a4b4(void *);int FUN_02033594(V *out,unsigned int id){void *obj,*p;V a,b;if(FUN_020781b0(id)){obj=FUN_020352a4(*(void **)0x02108cf4,id);if(obj){p=FUN_02076fb0(obj);if(p){((void (*)(V *,void *))(*(void ***)p)[3])(&a,p);*out=a;return 1;}p=FUN_0209a4b4(obj);if(p){((void (*)(V *,void *))(*(void ***)p)[7])(&b,p);*out=b;return 1;}}}return 0;}
