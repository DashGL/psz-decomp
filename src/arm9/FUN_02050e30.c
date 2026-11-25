// FUN_02050e30 @ 0x02050e30 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02050e30 @ 0x02050e30 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02050e30.txt.
 */
extern void FUN_02051314(void *); extern void FUN_020728c4(void *); extern void FUN_020ba8ac(void *);
void FUN_02050e30(void) { void **base=(void **)0x0210e248; char *p=base[1]; if(p) { if(p) { FUN_02051314(p); FUN_020728c4(p+0x74); FUN_020ba8ac(p); } base[1]=0; } }
