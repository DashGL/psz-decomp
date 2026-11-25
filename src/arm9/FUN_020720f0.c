// FUN_020720f0 @ 0x020720f0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020720f0 @ 0x020720f0 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Quantize angle into four quadrants with asymmetric boundaries.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020720f0.txt.
 */
unsigned int FUN_020720f0(char *self) { unsigned int value=*(unsigned short *)(self+130); if(value<=8192 || value>57344) return 0; if(value<=24576) return 16384; if(value<=40960) return 32768; return 49152; }
