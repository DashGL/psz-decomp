// FUN_0203254c @ 0x0203254c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_0203254c @ 0x0203254c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/0203254c.txt.
 */
extern void FUN_02082a30(void *); extern void FUN_020ba8ac(void *);
void *FUN_0203254c(void **s) { void *p=*s; if(p) { if(p) { FUN_02082a30(p); FUN_020ba8ac(p); } *s=0; } *(void **)0x02108c64=0; return s; }
