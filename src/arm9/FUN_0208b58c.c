// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-resume-2026-11-12.md
typedef struct {unsigned char fields[4];} Copy_0208b58c;
// FUN_0208b58c @ 0x0208b58c (inventory code 0x78, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose item icon and submit it at offset display position.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b58c.txt.
 */
extern int FUN_0208b6b0(void *,void *),FUN_0208b670(void *,void *),FUN_0208b604(void *,void *);extern void *FUN_02077f3c(void),*FUN_02078038(void *),*FUN_02077fec(void *);extern void FUN_020c331c(unsigned short,int,int,void *);void FUN_0208b58c(void *s,unsigned char *item,int *position){int icon,i;void *display;unsigned char header[4];if(FUN_0208b6b0(s,item)==1){icon=FUN_0208b670(s,item);display=FUN_02078038(FUN_02077f3c());FUN_020c331c((unsigned short)icon,position[0]+45056,position[1],display);}else{*(Copy_0208b58c *)header=*(const Copy_0208b58c *)item;icon=FUN_0208b604(s,header);display=FUN_02077fec(FUN_02077f3c());if(icon>0)FUN_020c331c((unsigned short)icon,position[0]+45056,position[1],display);}}
