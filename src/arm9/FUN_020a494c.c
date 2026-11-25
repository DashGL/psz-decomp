// FUN_020a494c @ 0x020a494c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020a494c @ 0x020a494c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table and run receiver and base cleanup before returning receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a494c.txt.
 */
extern void FUN_020a49a4(void *),FUN_020c2ad0(void *),FUN_020ba8ac(void *); void *FUN_020a494c(unsigned int *self) { self[0]=0x020fbfe4; FUN_020a49a4(self); FUN_020c2ad0(self); return self; }
