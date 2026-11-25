// FUN_0209a300 @ 0x0209a300 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0209a300 @ 0x0209a300 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release flagged resource and invoke resolved object method.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a300.txt.
 */
typedef void (*Method)(void *);extern void *FUN_020be450(void),*FUN_020352a4(void *,int),*FUN_0209a4b4(void *);extern void FUN_020be4b4(void *,int);void FUN_0209a300(char *self){void *p;if((*(unsigned int *)(self+72)&1)||(*(unsigned int *)(self+72)&2))FUN_020be4b4(FUN_020be450(),*(int *)self);p=FUN_0209a4b4(FUN_020352a4(*(void **)0x02108cf4,*(int *)(self+48)));if(p)(*(Method **)p)[5](p);}
