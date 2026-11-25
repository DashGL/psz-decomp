// FUN_0204e944 @ 0x0204e944 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e944 @ 0x0204e944 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 37.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b37/0204e944.txt.
 */
typedef struct {int x,y,z;} Vector;extern int FUN_02078198(int);extern void *FUN_020352a4(void *,int);extern char *FUN_020352c0(void *);extern int FUN_020447d4(void *,int,Vector *);
int FUN_0204e944(Vector *out,int id,int index) {int result=0;if(FUN_02078198(id)){void *p=FUN_020352a4(*(void **)0x02108cf4,id);if(p){char *s=FUN_020352c0(p);if(s){if(index==0){*out=*(Vector *)(s+0x38);result=1;}else result=FUN_020447d4(s,index,out);}}}return result;}
