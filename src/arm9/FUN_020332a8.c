// FUN_020332a8 @ 0x020332a8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_020332a8 @ 0x020332a8 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/020332a8.txt.
 */
extern void FUN_02033290(void *);
void *FUN_020332a8(char *s) { char *p=s,*end=s+0x50; do { FUN_02033290(p); p+=0x10; } while(p<end); *(unsigned int *)(s+0x50)=0; *(void **)0x02108c68=s; return s; }
