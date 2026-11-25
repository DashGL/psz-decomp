// FUN_0204e90c @ 0x0204e90c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e90c @ 0x0204e90c (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/0204e90c.txt.
 */
typedef struct { unsigned int x,y,z; } Vector; extern int FUN_02078188(int); extern char *FUN_0208555c(int); extern void FUN_020345f0(Vector *,void *);
int FUN_0204e90c(Vector *out,int id) { int result=0; Vector temp; if(FUN_02078188(id)) { char *p=FUN_0208555c(id); if(p) { FUN_020345f0(&temp,p+0x9c); *out=temp; result=1; } } return result; }
