// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// FUN_0204ec80 @ 0x0204ec80 (inventory code 0x3a, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 31.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b31/0204ec80.txt.
 */
typedef struct { unsigned int a,b,c,d; } Packet; extern void *FUN_0208555c(int); extern void FUN_0204e994(Packet *,unsigned int,int); extern int FUN_020703e8(void *,Packet *,int);
int FUN_0204ec80(int id,unsigned int value) { Packet b,a; int result=0; void *p=FUN_0208555c(id); if(p) { FUN_0204e994(&a,value,1); b=a; result=FUN_020703e8(p,&b,1); } return result; }
