// FUN_0205cdd4 @ 0x0205cdd4 (inventory code 0x30, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 200.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b200/0205cdd4.txt.
 */
unsigned int FUN_0205cdd4(int enabled){volatile unsigned short *p=(volatile unsigned short *)0x04000004;unsigned int old=*p&8;if(enabled)*p=*p|8;else *p=*p&~8u;return old;}
