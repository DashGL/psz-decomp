// FUN_020bf2fc @ 0x020bf2fc (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020bf2fc @ 0x020bf2fc (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Cleanup embedded+4 and return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf2fc.txt.
 */
extern void FUN_020bf390(void *); void *FUN_020bf2fc(char *self) { FUN_020bf390(self+4); return self; }
