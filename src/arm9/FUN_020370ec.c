// FUN_020370ec @ 0x020370ec (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020370ec @ 0x020370ec (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 31.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b31/020370ec.txt.
 */
typedef struct { int x,y,z; } Vector; extern int FUN_02086868(unsigned int,void *); extern void FUN_020bbfbc(Vector *,unsigned int);
int FUN_020370ec(void *unused,unsigned int id,Vector *out) { unsigned short angle[2]; Vector value; if(!FUN_02086868(id,angle)) return 0; value.x=0; value.y=0; value.z=4096; FUN_020bbfbc(&value,angle[0]); *out=value; return 1; }
