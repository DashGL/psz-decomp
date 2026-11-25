// FUN_020ab750 @ 0x020ab750 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020ab750 @ 0x020ab750 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke helper on each nonnull member of seven-pointer array +7f8.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ab750.txt.
 */
extern void FUN_02046d88(void *); void FUN_020ab750(char *self) { int i; for(i=0;i<7;i++) { void *p=((void **)(self+2040))[i]; if(p) FUN_02046d88(p); } }
