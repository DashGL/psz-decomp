// FUN_02072fc0 @ 0x02072fc0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072fc0 @ 0x02072fc0 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run global cleanup then destroy/free optional global object with nested guards.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072fc0.txt.
 */
extern void FUN_020730a8(void),FUN_02072f94(void *),FUN_020ba8ac(void *); void FUN_02072fc0(void) { void *p; FUN_020730a8(); p=*(void **)0x0211a210; if(p) { if(p) { if(p) { FUN_02072f94(p); FUN_020ba8ac(p); } *(void **)0x0211a210=0; } } }
