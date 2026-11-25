// FUN_020513b4 @ 0x020513b4 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_020513b4 @ 0x020513b4 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/020513b4.txt.
 */
extern int FUN_0205136c(void *,void *,int);
int FUN_020513b4(void *s,void *arg) { int i; for(i=0;i<2;i++) if(!FUN_0205136c(s,arg,i)) return 0; return 1; }
