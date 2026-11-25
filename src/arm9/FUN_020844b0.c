// FUN_020844b0 @ 0x020844b0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020844b0 @ 0x020844b0 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy resource container and clear global control fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020844b0.txt.
 */
extern struct { unsigned char f0, f1, f2, pad3; unsigned int f4; unsigned int f8; void *fc; } DAT_0211a500;
extern void FUN_02084890(void *),FUN_020ba8ac(void *); void FUN_020844b0(void) { void *p=DAT_0211a500.fc; if(p) { if(p) { FUN_02084890(p); FUN_020ba8ac(p); } DAT_0211a500.fc=0; } DAT_0211a500.f8=0; DAT_0211a500.f0=0; DAT_0211a500.f2=0; DAT_0211a500.f1=0; DAT_0211a500.f4=0; }
