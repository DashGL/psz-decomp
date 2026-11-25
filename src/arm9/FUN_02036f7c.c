// FUN_02036f7c @ 0x02036f7c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02036f7c @ 0x02036f7c (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/02036f7c.txt.
 */
typedef struct { int x,y,z; } Vector; extern void FUN_020bbfbc(Vector *,unsigned int);
int FUN_02036f7c(char *s,Vector *out) { Vector v; unsigned int angle=*(unsigned short *)(s+0x44); v.x=0; v.y=0; v.z=4096; FUN_020bbfbc(&v,angle); *out=v; return 1; }
