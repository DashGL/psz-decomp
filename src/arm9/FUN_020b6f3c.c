// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x62, exact bytes and relocation targets.
typedef struct {unsigned char bytes[14];} Copy_020b6f3c;
// FUN_020b6f3c @ 0x020b6f3c (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x62 candidate=0x62 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read paired descriptor percentage as fixed-point multiplier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Byte-aligned aggregate layout reconstructed from ROM.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
extern int FUN_020b7030(void *,int);extern unsigned char *FUN_02084778(int,int);unsigned int FUN_020b6f3c(void *s,int index){if(index>=19 && index<=29){int group=(index-19)/2,odd=((index-19)&1)!=0,level=FUN_020b7030(s,group),i;unsigned char d[14],*p;if(level<1 || level>15)level=1;p=FUN_02084778(group,level);*(Copy_020b6f3c *)d=*(const Copy_020b6f3c *)p;return ((unsigned int)(odd?d[6]:d[0])<<12)/100;}return 4096;}
