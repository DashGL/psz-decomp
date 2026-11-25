// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
typedef struct {unsigned char bytes[14];} Copy_020b707c;
// FUN_020b707c @ 0x020b707c (inventory code 0x6c, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check descriptor upgrade level and available requirement count.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Byte-aligned aggregate layout reconstructed from ROM.
 * See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
extern unsigned char *FUN_02084778(int,int);extern int FUN_02084758(int,int,int);int FUN_020b707c(char *s,unsigned char *item){int type=item[2],level=(*(int *)(item+4)&0x3fc000)>>14,i;unsigned char d[14],*p=FUN_02084778(type,level);*(Copy_020b707c *)d=*(const Copy_020b707c *)p;if(type>=0 && type<=10 && level>=0 && level<=15){int maximum=FUN_02084758(type,*(signed char *)(s+36),*(signed char *)(s+38)),cost=d[12];if(level<=maximum && *(unsigned char *)(s+91+type)<level && *(unsigned char *)(s+90)>=cost)return 1;}return 0;}
