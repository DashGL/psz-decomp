// FUN_0203454c @ 0x0203454c (0xa2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_0203454c @ 0x0203454c (inventory code 0xa2, thumb)
// check: 2.0/sp2p3 target=0xa2 candidate=0xa2 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 64.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b64/0203454c.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern void FUN_020345f0(Vector *,void *);extern void FUN_0205c8cc(Vector *,Vector *);extern void FUN_0205c7e8(Vector *,Vector *,Vector *);
void FUN_0203454c(char *s){Vector a,b,up,delta,normalized,cross1,cross2;FUN_020345f0(&a,s+36);FUN_020345f0(&b,s+24);up.x=0;up.y=4096;up.z=0;delta.x=a.x-b.x;delta.y=a.y-b.y;delta.z=a.z-b.z;normalized=delta;if(normalized.x||normalized.y||normalized.z)FUN_0205c8cc(&normalized,&normalized);FUN_0205c7e8(&delta,&up,&cross1);up=cross1;FUN_0205c7e8(&up,&delta,&cross2);up=cross2;*(unsigned int *)(s+48)=up.x;*(unsigned int *)(s+52)=up.y;*(unsigned int *)(s+56)=up.z;}
