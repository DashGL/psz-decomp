// FUN_02086180 @ 0x02086180 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02086180 @ 0x02086180 (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build and send peer operation packet.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086180.txt.
 */
extern void *UNK_0211a52c;extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *);extern int FUN_0208641c(int);void FUN_02086180(int a,int b,int c,int d){int packet[4];FUN_02036094(packet);FUN_020360a4(packet,8,3,16);packet[1]=-1;packet[2]=-1;*(unsigned short *)((char *)packet+12)=150;*((char *)packet+14)=0;*((char *)packet+15)=0;if(UNK_0211a52c){packet[1]=a;packet[2]=b;*(unsigned short *)((char *)packet+12)=FUN_0208641c(b);*((char *)packet+14)=c;*((char *)packet+15)=d;FUN_020bce3c(packet);}}
