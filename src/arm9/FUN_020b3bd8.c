// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe2, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0xe2, exact bytes and relocations.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_020b3bd8 @ 0x020b3bd8 (inventory code 0xe2, thumb)
// check: 2.0/sp2p3 target=0xe2 candidate=0xe2 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy packed actor identity, appearance fields, and position into a descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3bd8.txt.
 */
typedef struct{int x,y,z;} Vec;typedef struct{unsigned short h[9];} Identity020b3bd8;typedef struct{unsigned short h[8];} Part020b3bd8;void FUN_020b3bd8(char *out,unsigned short *identity,char *appearance,Vec *position){*(Identity020b3bd8 *)out=*(Identity020b3bd8 *)identity;*(unsigned short *)(out+18)=identity[9];*(Part020b3bd8 *)(out+20)=*(Part020b3bd8 *)appearance;*(Part020b3bd8 *)(out+36)=*(Part020b3bd8 *)(appearance+16);out[52]=*((signed char *)appearance+32);out[53]=*((signed char *)appearance+33);out[54]=*((signed char *)appearance+34);out[55]=*((signed char *)appearance+35);out[56]=*((unsigned char *)appearance+36);out[57]=*((unsigned char *)appearance+37);out[58]=*((unsigned char *)appearance+38);out[59]=*((unsigned char *)appearance+39);out[60]=*((unsigned char *)appearance+40);out[61]=*((unsigned char *)appearance+41);out[62]=*((unsigned char *)appearance+42);out[63]=*((unsigned char *)appearance+43);out[64]=*((unsigned char *)appearance+86);*(Vec *)(out+68)=*position;}
