// FUN_0209785c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0209785c @ 0x0209785c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install action table value and packed signed selector bytes for valid kind.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209785c.txt.
 */
extern char G_020F454C[];
void FUN_0209785c(unsigned int *self,signed char *source) { int kind=source[0]; if(kind>=0 && kind<7) { unsigned short packed=kind+256*source[1]; self[13]=((unsigned int *)G_020F454C)[kind]; self[14]=packed; } }
