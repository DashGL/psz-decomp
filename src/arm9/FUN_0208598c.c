// FUN_0208598c @ 0x0208598c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_0208598c @ 0x0208598c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install cleanup table, run helper, optionally free receiver; return original receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208598c.txt.
 */
extern void FUN_02085e34(void *), FUN_020ba8ac(void *);
void *FUN_0208598c(void **self) { self[0]=(void *)0x020fa97c; FUN_02085e34(self); FUN_020ba8ac(self); return self; }
