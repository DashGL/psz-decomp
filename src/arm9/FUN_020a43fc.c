// FUN_020a43fc @ 0x020a43fc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a43fc @ 0x020a43fc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate global 172-byte object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a43fc.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020a4478(void *); void FUN_020a43fc(void) { if(!*(void **)0x0211a660) { void *p=FUN_020ba894(172); if(p) p=FUN_020a4478(p); *(void **)0x0211a660=p; } }
