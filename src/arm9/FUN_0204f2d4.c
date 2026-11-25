// FUN_0204f2d4 @ 0x0204f2d4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f2d4 @ 0x0204f2d4 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/0204f2d4.txt.
 */
extern void FUN_020a8fdc(void); extern void FUN_02087698(void); extern void FUN_020b45e0(void); extern void FUN_020b3d34(void); extern void FUN_0204a4cc(void);
void FUN_0204f2d4(void) { void *p; FUN_020a8fdc(); FUN_02087698(); FUN_020b45e0(); FUN_020b3d34(); FUN_0204a4cc(); p=*(void **)0x0210e23c; if(p) { if(p) { if(p) ((void (*)(void *))(*(void ***)p)[1])(p); *(void **)0x0210e23c=0; } } }
