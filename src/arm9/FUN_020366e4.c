// FUN_020366e4 @ 0x020366e4 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020366e4 @ 0x020366e4 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 36.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b36/020366e4.txt.
 */
typedef struct { unsigned int x,y,z; } Vector;typedef struct { unsigned int w[25]; } Record;extern int FUN_02036730(void *,Vector *);extern void FUN_0203666c(Record *);extern void FUN_02046d94(Record *,int,int);
void FUN_020366e4(char *s) {Vector position;if(FUN_02036730(s,&position)) { Record r;Vector scale;unsigned int x;FUN_0203666c(&r);r.w[21]=147;*(Vector *)&r.w[8]=position;x=*(unsigned int *)(**(char ***)(s+20)+44);scale.x=x;scale.y=x;scale.z=x;*(Vector *)&r.w[11]=scale;FUN_02046d94(&r,0,0); }}
