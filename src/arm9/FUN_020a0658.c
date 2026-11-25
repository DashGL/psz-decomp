// FUN_020a0658 @ 0x020a0658 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020a0658 @ 0x020a0658 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy embedded resources and base, then free receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0658.txt.
 */
extern void FUN_020306fc(void *),FUN_020765f8(void *),FUN_020303bc(void *),FUN_020ba8ac(void *); void *FUN_020a0658(char *self) { FUN_020306fc(self+68); FUN_020306fc(self+60); FUN_020306fc(self+52); FUN_020303bc(self); FUN_020ba8ac(self); return self; }
