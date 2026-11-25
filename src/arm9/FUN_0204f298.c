// FUN_0204f298 @ 0x0204f298 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f298 @ 0x0204f298 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/0204f298.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void FUN_0204a498(void); extern void FUN_020b3d10(void); extern void FUN_020b45d4(void); extern void FUN_02087658(void); extern void FUN_020a8fb8(void);
void FUN_0204f298(void) { if(!*(void **)0x0210e23c) { unsigned int *p=FUN_020ba894(4); if(p) *p=0x020f928c; *(void **)0x0210e23c=p; } FUN_0204a498(); FUN_020b3d10(); FUN_020b45d4(); FUN_02087658(); FUN_020a8fb8(); }
