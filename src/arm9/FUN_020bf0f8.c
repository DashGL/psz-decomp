// FUN_020bf0f8 @ 0x020bf0f8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020bf0f8 @ 0x020bf0f8 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy fixed pool array and release global owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf0f8.txt.
 */
extern void *FUN_020bf2fc(void *); extern void FUN_0200c4d4(void *,unsigned int,unsigned int,void *(*)(void *)),FUN_020ba8ac(void *); void FUN_020bf0f8(void) { char *p=*(char **)0x0211b3d4; if(p) { if(p) { FUN_0200c4d4(p+5184,96,44,FUN_020bf2fc); FUN_020ba8ac(p); } *(void **)0x0211b3d4=0; } }
