// FUN_020370b8 @ 0x020370b8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020370b8 @ 0x020370b8 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/020370b8.txt.
 */
typedef struct { unsigned int x,y,z; } Vector; extern int FUN_020866b4(void *,Vector *); extern void FUN_02036348(Vector *,Vector *,void *);
int FUN_020370b8(char *s,void *arg,Vector *out) { Vector a,b; if(!FUN_020866b4(arg,&a)) return 0; FUN_02036348(&b,&a,s+0x38); *out=b; return 1; }
