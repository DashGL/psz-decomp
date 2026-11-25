// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_02080bb0 @ 0x02080bb0 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Expand 768 bytes into eight normalized mask flags per byte.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080bb0.txt.
 */
extern char G_020F2E5C[];
void FUN_02080bb0(unsigned char *source,unsigned char *dest) { int i,j; for(i=0;i<768;i++) { unsigned int value=*source++; for(j=0;j<8;j++) *dest++=(((unsigned char *)G_020F2E5C)[j]&value)?1:0; } }
