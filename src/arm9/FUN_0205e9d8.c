// FUN_0205e9d8 @ 0x0205e9d8 (inventory code 0x2c, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 185.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b185/0205e9d8.txt.
 */
int FUN_0205e9d8(unsigned int *out){volatile unsigned int *p=(volatile unsigned int *)0x04000600;if(*p&0x4000)return -1;*out=(*p&0x1f00)>>8;return 0;}
