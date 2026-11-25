// FUN_020313e0 @ 0x020313e0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020313e0 @ 0x020313e0 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/020313e0.txt.
 */
extern void FUN_02031498(void *); extern void FUN_020c3064(int); extern void FUN_020314c4(void *);
void FUN_020313e0(unsigned int *s) { s[3]=1; s[4]=1; s[5]=0; FUN_02031498(s); FUN_020c3064(0); FUN_020314c4(s); s[1]=1; s[0]=4; }
