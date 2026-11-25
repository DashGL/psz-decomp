// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// Typed record evidence: notes/sessions/continue-low-20261112.md
typedef struct{unsigned char b[11];}Bytes11_0203e31c;
typedef struct{unsigned char b[8];}Bytes8_0203e31c;
typedef struct{unsigned char b[5];}Bytes5_0203e31c;
// FUN_0203e31c @ 0x0203e31c (inventory code 0x8c, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 55.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b55/0203e31c.txt.
 */
void *FUN_0203e31c(unsigned char *dst,unsigned char *src){int i;*(unsigned int *)(dst+0)=*(unsigned int *)(src+0);*(unsigned int *)(dst+4)=*(unsigned int *)(src+4);*(unsigned int *)(dst+8)=*(unsigned int *)(src+8);*(unsigned short *)(dst+12)=*(unsigned short *)(src+12);*(unsigned short *)(dst+14)=*(unsigned short *)(src+14);*(unsigned short *)(dst+16)=*(unsigned short *)(src+16);*(unsigned short *)(dst+18)=*(unsigned short *)(src+18);*(unsigned short *)(dst+20)=*(unsigned short *)(src+20);*(unsigned short *)(dst+22)=*(unsigned short *)(src+22);*(unsigned short *)(dst+24)=*(unsigned short *)(src+24);*(unsigned short *)(dst+26)=*(unsigned short *)(src+26);dst[28]=src[28];*(Bytes5_0203e31c*)(dst+29)=*(const Bytes5_0203e31c*)(src+29);*(Bytes8_0203e31c*)(dst+34)=*(const Bytes8_0203e31c*)(src+34);dst[42]=src[42];*(Bytes11_0203e31c*)(dst+43)=*(const Bytes11_0203e31c*)(src+43);dst[54]=src[54];return dst;}
