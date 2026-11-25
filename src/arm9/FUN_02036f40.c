// FUN_02036f40 @ 0x02036f40 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02036f40 @ 0x02036f40 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/02036f40.txt.
 */
extern int FUN_020363b8(void *); extern int FUN_02034b8c(void *,int); extern void FUN_02036f08(void *,int); extern void FUN_02036ed0(void *,int);
void FUN_02036f40(char *s) { if(FUN_020363b8(s)==1 && *(void **)0x02108cf0) { if(!FUN_02034b8c(s+0x38,256)) FUN_02036f08(s,2); else FUN_02036ed0(s,2); } }
