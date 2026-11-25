// FUN_020362ec @ 0x020362ec (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020362ec @ 0x020362ec (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 40.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b40/020362ec.txt.
 */
typedef struct{int x,y,z;} Vector;extern int FUN_020866b4(int,Vector *);extern void FUN_02036348(Vector *,Vector *,Vector *);extern void FUN_02036368(Vector *);extern unsigned int FUN_0205cc08(int);
void FUN_020362ec(char *s,int id,unsigned int a,unsigned int b){Vector target;if(FUN_020866b4(id,&target)){Vector origin=*(Vector *)(s+56),delta;unsigned int angle;FUN_02036348(&delta,&origin,&target);FUN_02036368(&delta);angle=FUN_0205cc08(delta.z);if(delta.x<0)angle=(65536u-angle)&65535;*(unsigned short *)(s+88)=angle;*(unsigned int *)(s+92)=a;*(unsigned int *)(s+96)=b;}}
