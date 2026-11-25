// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Replace five display fields preserving mask 0x43.
 * Field identities remain provisional.
 */
void FUN_020af4a4(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e) {volatile unsigned short *reg=(volatile unsigned short *)0x0400000a;*reg=(*reg&0x43)|(a<<14)|(b<<7)|(c<<8)|(d<<2)|(e<<13);}
