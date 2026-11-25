// FUN_02078148 @ 0x02078148 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_02078148 @ 0x02078148 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reinitialize optional owned helper using forwarded value and zero third argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078148.txt.
 */
extern void FUN_020c1478(void *,unsigned int,unsigned int);
void FUN_02078148(void **self,unsigned int value) { if(*self) FUN_020c1478(*self,value,0); }
