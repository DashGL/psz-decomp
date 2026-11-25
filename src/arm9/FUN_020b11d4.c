// FUN_020b11d4 @ 0x020b11d4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020b11d4 @ 0x020b11d4 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install table and run receiver/base cleanup before returning self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b11d4.txt.
 */
extern void FUN_020b1f48(void *),FUN_020b9e28(void *),FUN_020ba940(void *); void *FUN_020b11d4(unsigned int *self) { self[0]=0x020fc654; FUN_020b1f48(self); FUN_020b9e28(self); return self; }
