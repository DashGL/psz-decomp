// FUN_0208d5d0 @ 0x0208d5d0 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_0208d5d0 @ 0x0208d5d0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct message and initialize words and halfwords.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d5d0.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int); void *FUN_0208d5d0(char *self) { FUN_02036094(self); FUN_020360a4(self,2,3,24); *(unsigned int *)(self+4)=0; *(unsigned int *)(self+8)=0; *(unsigned short *)(self+12)=0; *(unsigned short *)(self+14)=0; *(unsigned short *)(self+16)=0; *(unsigned short *)(self+18)=0; *(int *)(self+20)=-1; return self; }
