// FUN_0207e0b0 @ 0x0207e0b0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207e0b0 @ 0x0207e0b0 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Base initialize, install table and reset trailing fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207e0b0.txt.
 */
extern void FUN_0207a44c(void *); void *FUN_0207e0b0(char *self) { FUN_0207a44c(self); *(unsigned int *)self=0x020fa4e0; *(unsigned int *)(self+380)=31; *(unsigned int *)(self+384)=0; *(unsigned int *)(self+388)=0; *(unsigned short *)(self+392)=0; return self; }
