// FUN_020331a0 @ 0x020331a0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_020331a0 @ 0x020331a0 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/020331a0.txt.
 */
extern int FUN_020855bc(int);
int FUN_020331a0(char *s) { int i; if(*(unsigned int *)(s+8)) return 1; for(i=0;i<4;i++) if(((unsigned int *)(s+0xc))[i] && FUN_020855bc(i)==2) return 1; return 0; }
