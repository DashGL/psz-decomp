// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
typedef struct { signed char entries[8]; } Mapping_02032350;
extern Mapping_02032350 DAT_020ec2a0;
// FUN_02032350 @ 0x02032350 (inventory code 0x4c, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 36.
 */
extern int FUN_0206d3dc(void *,int *);extern void *FUN_0208f068(void);extern int FUN_0208efa8(void *,int,int,int);
int FUN_02032350(char *s,void *p) { int index=-1;if(FUN_0206d3dc(p,&index)) {void *m=FUN_0208f068();if(m) {Mapping_02032350 table=DAT_020ec2a0;if(table.entries[index]>=0)return FUN_0208efa8(m,*(int *)(s+0x48),0,table.entries[index]);}}return 0;}

/* Signed-byte mapping and complete matching proof: notes/reference/resume2-low-20261112/FUN_02032350-proof.json. */
