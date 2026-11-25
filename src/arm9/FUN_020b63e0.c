// FUN_020b63e0 @ 0x020b63e0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020b63e0 @ 0x020b63e0 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Extract seven-bit packed field when descriptor bytes are zero and17.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b63e0.txt.
 */
unsigned int FUN_020b63e0(void *unused,unsigned char *descriptor) { if(descriptor[0]==0 && descriptor[1]==17) return (int)(*(unsigned int *)(descriptor+4)&(127u<<4))>>4; return 0; }
