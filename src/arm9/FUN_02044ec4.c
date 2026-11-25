// FUN_02044ec4 @ 0x02044ec4 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044ec4 @ 0x02044ec4 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/02044ec4.txt.
 */
extern void FUN_0206e6f4(void *); extern void FUN_0206e6d8(void *,void *); extern void FUN_02044eb0(void *,void *,void *);
int FUN_02044ec4(char *s,char *parent,void *arg) { if(parent) { FUN_0206e6f4(s); FUN_0206e6d8(parent,s); FUN_02044eb0(s,parent+0x24,arg); *(void **)(s+0x130)=parent; return 1; } return 0; }
