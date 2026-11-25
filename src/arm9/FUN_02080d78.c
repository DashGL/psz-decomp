// FUN_02080d78 @ 0x02080d78 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_02080d78 @ 0x02080d78 (inventory code 0x8c, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and transmit bounded actor-data packet.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080d78.txt.
 */
extern int FUN_020c2e38(void);extern void *FUN_020ba894(unsigned int);extern void FUN_0200c938(void *,unsigned int),FUN_020655d8(void *,void *,unsigned int),FUN_020bce3c(void *),FUN_020ba8ac(void *);int FUN_02080d78(void *unused,int id,void *data,int mode){unsigned char *p;if(FUN_020c2e38())return 0;p=FUN_020ba894(780);if(p){p[0]=1;p[1]=0;p[2]=0;p[3]=0;*(short *)(p+4)=0;p[6]=0;p[7]=0;FUN_0200c938(p+8,768);p[776]=0;p[777]=0;FUN_0200c938(p+778,2);p[2]=2;p[3]=0;p[0]=195;}if(p){p[6]=id;p[776]=mode;FUN_020655d8(data,p+8,768);FUN_020bce3c(p);FUN_020ba8ac(p);return 1;}return 0;}
