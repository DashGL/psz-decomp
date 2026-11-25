// FUN_02035250 @ 0x02035250 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02035250 @ 0x02035250 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Free optional global object and clear its slot after call.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02035250.txt.
 */
extern void FUN_020ba8ac(void *);
void FUN_02035250(void) { void *object=*(void **)0x02108cf4; if(object) { FUN_020ba8ac(object); *(void **)0x02108cf4=0; } }
