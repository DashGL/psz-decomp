// FUN_020b491c @ 0x020b491c (inventory code 0x1c, thumb)
// flags: -O4,p
/* USA ROM reconstruction, 2026-11-04.
 * Return object predicate if global condition and object present.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b491c.txt.
 */
extern void **DAT_0211aa74;
extern void *DAT_a_0211aa74;

extern unsigned int FUN_020485b0(void *); unsigned int FUN_020b491c(void) {  unsigned int result=0; if((&DAT_0211aa74)[5] && (&DAT_0211aa74)[2]) result=FUN_020485b0((void *)(&DAT_0211aa74)[2]); return result; }
