// FUN_02041a20 @ 0x02041a20 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041a20 @ 0x02041a20 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/02041a20.txt.
 */
extern char *DAT_02108c64;
extern const char DAT_020f8dc0[];
extern int FUN_02032e78(void *,int); extern void FUN_02003d54(void *,const void *,unsigned int); extern void FUN_02041a50(void *);
void FUN_02041a20(void *unused,void *out) { char *p=DAT_02108c64; if(FUN_02032e78(p,*(signed char *)(p+0x16))) FUN_02003d54(out,DAT_020f8dc0,4); else FUN_02041a50(out); }
