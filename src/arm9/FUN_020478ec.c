// FUN_020478ec @ 0x020478ec (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020478ec @ 0x020478ec (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 34.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b34/020478ec.txt.
 */
extern void FUN_02047930(void *); extern void FUN_02047798(void *,void *); extern void *FUN_020be450(void); extern int FUN_020beccc(void *,void *,int,void *,void *); extern void FUN_020be4f8(void *,int,int);
void FUN_020478ec(char *s,char *a,void *b,void *c) { FUN_02047930(s); FUN_02047798(s+0x110,a+12); *(int *)(s+0x168)=FUN_020beccc(FUN_020be450(),a,1,b,c); FUN_020be4f8(FUN_020be450(),*(int *)(s+0x168),0); }
