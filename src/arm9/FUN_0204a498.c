// FUN_0204a498 @ 0x0204a498 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a498 @ 0x0204a498 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/0204a498.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_0204a704(void *); extern void FUN_02044ef8(void); extern void FUN_020450cc(void); extern void FUN_02045164(void); extern void FUN_020451d4(void);
void FUN_0204a498(void) { if(!*(void **)0x0210e234) { void *p=FUN_020ba894(104); if(p) p=FUN_0204a704(p); *(void **)0x0210e234=p; } FUN_02044ef8(); FUN_020450cc(); FUN_02045164(); FUN_020451d4(); }
