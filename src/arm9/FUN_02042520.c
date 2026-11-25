// FUN_02042520 @ 0x02042520 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02042520 @ 0x02042520 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/02042520.txt.
 */
void *FUN_02042520(char *s,int index) { char *p; if(index>-1 && index<5) { p=*(char **)(s+0xcc+4*index); if(p) return *(void **)(p+0x24); } return 0; }
