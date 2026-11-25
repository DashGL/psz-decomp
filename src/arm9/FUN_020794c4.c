// FUN_020794c4 @ 0x020794c4 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020794c4 @ 0x020794c4 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three unsigned halfwords; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020794c4.txt.
 */
void *FUN_020794c4(unsigned short *dst,unsigned short *src) { dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; return dst; }
