// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// ROM 0208d704..0208d708 reads the first stack argument as signed byte.
// Declare that input signed char; keep the local packet address expression
// direct rather than pinning a separate byte-pointer local across calls.
// FUN_0208d6d0 @ 0x0208d6d0 (inventory code 0x78, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send actor action packet and apply six-argument local action.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d6d0.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *),FUN_0206f250(void *,unsigned short,int,int,int,int);extern void *FUN_0208555c(int);void FUN_0208d6d0(void *unused,int index,unsigned short angle,int type,signed char a,int b,int c){int packet[5];void *actor;FUN_02036094(packet);FUN_020360a4(packet,2,6,20);*(short *)((signed char *)packet+4)=0;((signed char *)packet)[6]=0;((signed char *)packet)[7]=-1;packet[2]=-1;packet[3]=-1;*(short *)((signed char *)packet+16)=0;*(short *)((signed char *)packet+18)=0;*(short *)((signed char *)packet+4)=angle;((signed char *)packet)[6]=type;((signed char *)packet)[7]=a;packet[2]=index;packet[3]=b;*(short *)((signed char *)packet+16)=(signed char)c;FUN_020bce3c(packet);actor=FUN_0208555c(index);if(actor)FUN_0206f250(actor,*(unsigned short *)((signed char *)packet+4),((signed char *)packet)[6],((signed char *)packet)[7],packet[3],*(short *)((signed char *)packet+16));}
