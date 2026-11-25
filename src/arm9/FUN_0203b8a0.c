// FUN_0203b8a0 @ 0x0203b8a0 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b8a0 @ 0x0203b8a0 (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 36.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b36/0203b8a0.txt.
 */
typedef struct { unsigned int x,y,z; } Vector; typedef struct { unsigned int w[25]; } Record; extern void FUN_0203666c(Record *); extern void FUN_020345f0(Vector *,Vector *); extern int FUN_02046d94(Record *,int,int);
int FUN_0203b8a0(char *s,unsigned int id,Vector *position,int mode) { Record r; Vector v; FUN_0203666c(&r);r.w[21]=id;r.w[22]=*(unsigned int *)(s+0xfc);FUN_020345f0(&v,position);*(Vector *)&r.w[8]=v;if(mode==1)r.w[7]|=65536;return FUN_02046d94(&r,0,0); }
