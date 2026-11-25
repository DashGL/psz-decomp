// FUN_0207381c @ 0x0207381c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_0207381c @ 0x0207381c (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return global mode-3 object, otherwise null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207381c.txt.
 */
void *FUN_0207381c(void) { char *state=(char *)0x0211a210; if(*(signed char *)(state+4)==3) return *(void **)(state+40); return 0; }
