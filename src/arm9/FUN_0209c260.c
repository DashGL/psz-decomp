// FUN_0209c260 @ 0x0209c260 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209c260 @ 0x0209c260 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose one of two lower bounds and return random inclusive range value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209c260.txt.
 */
extern unsigned int FUN_0209beac(unsigned int); unsigned int FUN_0209c260(char *self,int index,int alternate) { unsigned char *p=(unsigned char *)self+513+3*(index-1); unsigned int low=alternate?p[1]:p[0]; return low+FUN_0209beac(p[2]-low+1); }
