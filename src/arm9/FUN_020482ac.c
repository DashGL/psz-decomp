// FUN_020482ac @ 0x020482ac (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020482ac @ 0x020482ac (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/020482ac.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern int FUN_02047440(void *);extern int FUN_0204770c(void *);extern void FUN_02035408(Vector *,unsigned int,unsigned int,unsigned int);
int FUN_020482ac(char *s){int r=FUN_02047440(s);if(!r&&FUN_0204770c(s)){Vector v;int value;FUN_02035408(&v,*(unsigned int *)(s+92),*(unsigned int *)(s+96)-*(unsigned int *)(s+260),*(unsigned int *)(s+100));*(Vector *)(s+92)=v;value=(int)(*(unsigned int *)(s+168)-*(unsigned int *)(s+264));if(value<0)value=0;*(int *)(s+168)=value;}return r;}
