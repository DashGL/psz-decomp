// FUN_020b6800 @ 0x020b6800 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020b6800 @ 0x020b6800 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Extract seven-bit field at bit11 for descriptor type0,17.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b6800.txt.
 */
unsigned int FUN_020b6800(void *unused,unsigned char *p) { if(p[0]==0 && p[1]==17) return (int)(*(unsigned int *)(p+4)&(254u<<10))>>11; return 0; }
