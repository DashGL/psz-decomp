// FUN_020bdec8 @ 0x020bdec8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020bdec8 @ 0x020bdec8 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Mark all sixty-four records, reloading the shared pointer each iteration.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bdec8.txt.
 */
void FUN_020bdec8(char *self) { int i; if(*(char **)(self+3920)) for(i=0;i<64;i++) (*(char **)(self+3920))[24*i+2]=1; }
