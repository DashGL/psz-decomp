// FUN_02030e98 @ 0x02030e98 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030e98 @ 0x02030e98 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/02030e98.txt.
 */
extern void FUN_02030fa0(void *); extern void FUN_020403cc(void *); extern void FUN_020ba8ac(void *);
void *FUN_02030e98(char *s) { void *p; *(unsigned int *)s=0x020f6c34; FUN_02030fa0(s); p=*(void **)(s+0x28); if(p) { if(p) { FUN_020403cc(p); FUN_020ba8ac(p); } *(void **)(s+0x28)=0; } *(void **)0x02108c58=0; return s; }
