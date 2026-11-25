// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x66, exact bytes and relocation targets.
typedef struct { unsigned char b[14]; } Record14_0204e3a8;
typedef struct { unsigned char b[6]; } Subrecord6_0204e3a8;
// FUN_0204e3a8 @ 0x0204e3a8 (inventory code 0x66, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 44.
 */
extern unsigned char *FUN_02084778(int,int);extern void *FUN_0208555c(int);extern int FUN_0204e738(int,int,unsigned int);extern void FUN_0204e2c0(int,int,int);
void FUN_0204e3a8(int id,int arg){Record14_0204e3a8 record;Subrecord6_0204e3a8 part;unsigned char *src=FUN_02084778(5,arg);unsigned int value;int i;record=*(const Record14_0204e3a8 *)src;part=*(const Subrecord6_0204e3a8 *)(record.b+6);value=(unsigned int)part.b[2]<<12;if(FUN_0208555c(id))for(i=0;i<=3;i++)if(FUN_0204e738(id,i,value))FUN_0204e2c0(id,i,arg);}

/* Record layout and exact full-body proof: notes/reference/resume2-low-20261112/FUN_0204e3a8-proof.json. */
