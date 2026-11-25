// FUN_0208bbc0 @ 0x0208bbc0 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0208bbc0 @ 0x0208bbc0 (inventory code 0x60, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve display entry and render into selected output.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208bbc0.txt.
 */
extern void *FUN_0208f068(void),*FUN_02077930(void),*FUN_0208efa8(void *,int,int,int);extern int FUN_02077d98(void *);extern void FUN_020c3788(void *,void *,int,int,int);void FUN_0208bbc0(char *s,int a,int b,int c,int d,int alternate){void *manager=FUN_0208f068();int index=FUN_02077d98(FUN_02077930());if(manager){if(alternate)FUN_020c3788(*(void **)(s+52),FUN_0208efa8(manager,index,a,b),c,d,2);else FUN_020c3788(*(void **)(s+48),FUN_0208efa8(manager,index,a,b),c,d,2);}}
