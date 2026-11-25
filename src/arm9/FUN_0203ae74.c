// FUN_0203ae74 @ 0x0203ae74 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203ae74 @ 0x0203ae74 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 39.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b39/0203ae74.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern void FUN_020345f0(Vector *,Vector *);extern void FUN_02035408(Vector *,unsigned int,unsigned int,unsigned int);
void FUN_0203ae74(char *s,Vector *delta){Vector a,b,c;FUN_020345f0(&a,(Vector *)(s+272));FUN_020345f0(&b,delta);FUN_02035408(&c,a.x+b.x,a.y+b.y,a.z+b.z);b=c;*(unsigned int *)(s+272)=b.x;*(unsigned int *)(s+276)=b.y;*(unsigned int *)(s+280)=b.z;}
