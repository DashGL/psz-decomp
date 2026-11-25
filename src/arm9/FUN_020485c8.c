// FUN_020485c8 @ 0x020485c8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020485c8 @ 0x020485c8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/020485c8.txt.
 */
extern void FUN_02048854(void *,int);
void FUN_020485c8(char *s,int arg) { int i; for(i=0;i<3;i++) { void *p=((void **)(s+0x14))[i]; if(p) FUN_02048854(p,arg); } }
