// FUN_020be45c @ 0x020be45c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020be45c @ 0x020be45c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear counters before and after record initialization.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be45c.txt.
 */
extern void FUN_020bedb4(void *); void *FUN_020be45c(char *self) { *(int *)(self+2400)=0; *(int *)(self+2404)=0; FUN_020bedb4(self); *(int *)(self+2400)=0; *(int *)(self+2404)=0; return self; }
