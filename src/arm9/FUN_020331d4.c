// FUN_020331d4 @ 0x020331d4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_020331d4 @ 0x020331d4 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/020331d4.txt.
 */
extern void FUN_0207f3fc(void *); extern void FUN_02032838(void *,void *);
void *FUN_020331d4(char *s,void *arg) { FUN_0207f3fc(s); *(void **)(s+4)=arg; *(unsigned int *)(s+8)=0; *(unsigned int *)(s+0xc)=0; FUN_02032838(s,*(char **)0x02108c64+0x14); return s; }
