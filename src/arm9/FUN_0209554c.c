// FUN_0209554c @ 0x0209554c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0209554c @ 0x0209554c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return global object word +4c0 if present, otherwise zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209554c.txt.
 */
unsigned int FUN_0209554c(void) { char *p=*(char **)0x02108d08; if(p) return *(unsigned int *)(p+1216); return 0; }
