// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// Direct packet-address expressions avoid pinning an alias pointer across
// helper calls and preserve the ROM local-address schedule.
// FUN_0208ddcc @ 0x0208ddcc (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Broadcast action packet then apply action locally.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208ddcc.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *),FUN_02070980(void *,int,unsigned short);extern void *FUN_0208555c(int);void FUN_0208ddcc(void *unused,int index,int action,int value){int packet[2];void *actor;FUN_02036094(packet);FUN_020360a4(packet,2,23,8);((signed char *)packet)[4]=-1;((signed char *)packet)[5]=-1;*(unsigned short *)(((signed char *)packet)+6)=0;((signed char *)packet)[4]=index;((signed char *)packet)[5]=action;*(unsigned short *)(((signed char *)packet)+6)=value;FUN_020bce3c(packet);actor=FUN_0208555c(((signed char *)packet)[4]);if(actor)FUN_02070980(actor,((signed char *)packet)[5],*(unsigned short *)(((signed char *)packet)+6));}
