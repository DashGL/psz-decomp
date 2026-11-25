// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x32, exact bytes and relocation targets.
// Full body ends with pop at 0208d590; following halfword is alignment.
// Signed short sentinel store preserves subs zero,#1 instead of pooling65535.
// Packet address remains a direct expression rather than a pinned alias.
// FUN_0208d560 @ 0x0208d560 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send two-halfword descriptor message.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d560.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *);void FUN_0208d560(void *unused,unsigned int a,unsigned int b){unsigned int packet[2];FUN_02036094(packet);FUN_020360a4(packet,2,2,8);((unsigned short *)packet)[2]=0;((short *)packet)[3]=-1;((unsigned short *)packet)[2]=b;((unsigned short *)packet)[3]=a;FUN_020bce3c(packet);}
