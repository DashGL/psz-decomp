// FUN_02050db4 @ 0x02050db4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02050db4 @ 0x02050db4 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/02050db4.txt.
 */
extern void FUN_02050cd8(void *); extern void FUN_020ba8ac(void *);
void FUN_02050db4(void) { void *p=*(void **)0x0210e244; while(p) { void *old=p; p=*(void **)p; if(old) { FUN_02050cd8(old); FUN_020ba8ac(old); } } *(void **)0x0210e244=0; }
