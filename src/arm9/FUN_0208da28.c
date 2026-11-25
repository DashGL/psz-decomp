// FUN_0208da28 @ 0x0208da28 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_0208da28 @ 0x0208da28 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send action message and apply action locally.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208da28.txt.
 */
extern void FUN_02085380(void *),FUN_020bce3c(void *),FUN_0206fd64(void *);extern void *FUN_0208555c(int);void FUN_0208da28(void *unused,int id){unsigned short packet[6];void *p;FUN_02085380(packet);packet[2]=0;packet[3]=0;packet[4]=9;packet[5]=id;FUN_020bce3c(packet);p=FUN_0208555c(id);if(p)FUN_0206fd64(p);}
