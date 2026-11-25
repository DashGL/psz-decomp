// FUN_02030ed0 @ 0x02030ed0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030ed0 @ 0x02030ed0 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/02030ed0.txt.
 */
extern void FUN_02030fa0(void *); extern void FUN_020403cc(void *); extern void FUN_020ba8ac(void *);
void *FUN_02030ed0(char *s) { void *p; *(unsigned int *)s=0x020f6c34; FUN_02030fa0(s); p=*(void **)(s+0x28); if(p) { if(p) { FUN_020403cc(p); FUN_020ba8ac(p); } *(void **)(s+0x28)=0; } *(void **)0x02108c58=0; FUN_020ba8ac(s); return s; }
