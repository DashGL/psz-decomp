// FUN_0208d9b8 @ 0x0208d9b8 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0208d9b8 @ 0x0208d9b8 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send resource-change message and apply signed truncated amount locally.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d9b8.txt.
 */
extern void FUN_02085380(void *),FUN_020bce3c(void *),FUN_0206fb84(void *,int);extern void *FUN_0208555c(int);void FUN_0208d9b8(void *unused,int id,unsigned int amount){unsigned short packet[6];void *p;FUN_02085380(packet);packet[2]=amount;packet[3]=0;packet[4]=7;packet[5]=id;FUN_020bce3c(packet);p=FUN_0208555c(id);if(p)FUN_0206fb84(p,((short *)packet)[2]);}
