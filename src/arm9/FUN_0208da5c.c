// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Direct packet-address expressions avoid pinning an alias pointer across
// helper calls and preserve the ROM local-address schedule.
// FUN_0208da5c @ 0x0208da5c (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send message with id and byte payload.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208da5c.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *);void FUN_0208da5c(void *unused,unsigned int id,unsigned int value){unsigned int packet[3];FUN_02036094(packet);packet[1]=-1;((unsigned char *)packet)[8]=0;((unsigned char *)packet)[9]=0;((unsigned char *)packet)[10]=0;((unsigned char *)packet)[11]=0;FUN_020360a4(packet,2,10,12);packet[1]=id;((unsigned char *)packet)[8]=value;FUN_020bce3c(packet);}
