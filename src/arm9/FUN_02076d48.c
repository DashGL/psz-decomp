// FUN_02076d48 @ 0x02076d48 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076d48 @ 0x02076d48 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose fixed-point factor ccd for child signed byte +4 equal four, else 159a.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076d48.txt.
 */
unsigned int FUN_02076d48(char *self) { signed char *child=*(signed char **)(self+68); if(child[4]==4) return 0xccd; return 0x159a; }
