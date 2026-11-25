// FUN_020bbfa8 @ 0x020bbfa8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020bbfa8 @ 0x020bbfa8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test incoming mask against global input halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bbfa8.txt.
 */
int FUN_020bbfa8(unsigned int mask) { if(mask&*(unsigned short *)((char *)0x0211b330+0)) return 1; return 0; }
