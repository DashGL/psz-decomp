// FUN_020bc3a4 @ 0x020bc3a4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020bc3a4 @ 0x020bc3a4 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read little-endian24-bit field at byte one, or zero for null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc3a4.txt.
 */
unsigned int FUN_020bc3a4(unsigned char *p) { unsigned int value=0; if(p) value=(p[3]<<16)|(p[1]|(p[2]<<8)); return value; }
