// FUN_020bedf0 @ 0x020bedf0 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020bedf0 @ 0x020bedf0 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply receiver helper to100 contiguous24-byte records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bedf0.txt.
 */
extern void FUN_020bef74(void *,void *); void FUN_020bedf0(char *self) { char *p=self; int i; for(i=0;i<100;i++) { FUN_020bef74(self,p); p+=24; } }
