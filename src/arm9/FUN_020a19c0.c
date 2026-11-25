// FUN_020a19c0 @ 0x020a19c0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a19c0 @ 0x020a19c0 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy embedded resources and base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a19c0.txt.
 */
extern void FUN_020306fc(void *),FUN_020765f8(void *),FUN_020303bc(void *),FUN_020ba8ac(void *); void *FUN_020a19c0(char *self) { FUN_020306fc(self+80); FUN_020306fc(self+72); FUN_020765f8(self+48); FUN_020303bc(self); return self; }
