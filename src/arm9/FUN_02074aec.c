// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// FUN_02074aec @ 0x02074aec (inventory code 0x7c, thumb)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy packed descriptor fields and fixed halfword arrays.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Unsigned halfword fields and aligned subrecord copies
 * reproduce the complete ROM. See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
typedef struct {unsigned short h[4];} Four_02074aec;
typedef struct {unsigned short h[8];} Eight_02074aec;
void *FUN_02074aec(char *out,char *in){*(int *)out=*(int *)in;*(unsigned short *)(out+4)=*(unsigned short *)(in+4);*(unsigned short *)(out+6)=*(unsigned short *)(in+6);*(int *)(out+8)=*(int *)(in+8);*(unsigned short *)(out+12)=*(unsigned short *)(in+12);*(unsigned short *)(out+14)=*(unsigned short *)(in+14);*(unsigned short *)(out+16)=*(unsigned short *)(in+16);*(unsigned short *)(out+18)=*(unsigned short *)(in+18);*(unsigned short *)(out+20)=*(unsigned short *)(in+20);*(unsigned short *)(out+22)=*(unsigned short *)(in+22);*(unsigned short *)(out+24)=*(unsigned short *)(in+24); *(Four_02074aec *)(out+26)=*(const Four_02074aec *)(in+26);*(Eight_02074aec *)(out+34)=*(const Eight_02074aec *)(in+34);*(unsigned short *)(out+50)=*(unsigned short *)(in+50);*(unsigned short *)(out+52)=*(unsigned short *)(in+52);*(unsigned short *)(out+54)=*(unsigned short *)(in+54);*(Four_02074aec *)(out+56)=*(const Four_02074aec *)(in+56);return out;}
