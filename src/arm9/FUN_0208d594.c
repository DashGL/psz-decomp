// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Direct packet-address expressions avoid pinning an alias pointer across
// helper calls and preserve the ROM local-address schedule.
// FUN_0208d594 @ 0x0208d594 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send bounded action with coordinates and stack halfwords.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d594.txt.
 */
extern void FUN_0208d5d0(void *),FUN_020bce3c(void *);void FUN_0208d594(void *unused,unsigned int id,int *position,int kind,unsigned short a,unsigned short b){unsigned int packet[6];if(kind>=0 && kind<3){FUN_0208d5d0(packet);packet[1]=position[0];packet[2]=position[2];((unsigned short *)packet)[6]=a;((unsigned short *)packet)[7]=b;((unsigned short *)packet)[8]=kind;((unsigned short *)packet)[9]=1;packet[5]=id;FUN_020bce3c(packet);}}
