// FUN_0208d748 @ 0x0208d748 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0208d748 @ 0x0208d748 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build message carrying descriptor and id.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d748.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_0203955c(void *),FUN_02039534(void *,void *),FUN_020bce3c(void *);void FUN_0208d748(void *unused,unsigned int id,void *desc){unsigned int packet[6];FUN_02036094(packet);FUN_020360a4(packet,2,7,24);FUN_0203955c(packet+1);packet[5]=-1;FUN_02039534(packet+1,desc);packet[5]=id;FUN_020bce3c(packet);}
