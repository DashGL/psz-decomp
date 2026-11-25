// FUN_0208680c @ 0x0208680c (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0208680c @ 0x0208680c (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return displacement between current and stored actor positions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208680c.txt.
 */
extern void *UNK_02108cf4;extern void *FUN_020352a4(void *,int);extern char *FUN_02039200(void *);extern int FUN_0203bf3c(void *);int FUN_0208680c(int index,int *out){char *p=FUN_02039200(FUN_020352a4(UNK_02108cf4,index));if(p && FUN_0203bf3c(p)){out[0]=*(int *)(p+156)-*(int *)(p+168);out[1]=*(int *)(p+160)-*(int *)(p+172);out[2]=*(int *)(p+164)-*(int *)(p+176);return 1;}return 0;}
