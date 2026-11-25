// FUN_02084d48 @ 0x02084d48 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02084d48 @ 0x02084d48 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate and construct singleton.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084d48.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_02085914(void *); void *FUN_02084d48(void) { if(!*(void **)0x0211a52c) { void *p=FUN_020ba894(800); if(p) p=FUN_02085914(p); *(void **)0x0211a52c=p; if(!p) return 0; } return *(void **)0x0211a52c; }
