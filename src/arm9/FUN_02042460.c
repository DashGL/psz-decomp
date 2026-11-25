// FUN_02042460 @ 0x02042460 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02042460 @ 0x02042460 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/02042460.txt.
 */
int FUN_02042460(char *s,int index) { if(index>-1 && index<5) { char *p=((char **)(s+0xcc))[index]; if(p) { if(*(unsigned int *)(p+4)&16) return 1; return 0; } } return 0; }
