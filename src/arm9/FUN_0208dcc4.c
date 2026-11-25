// FUN_0208dcc4 @ 0x0208dcc4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_0208dcc4 @ 0x0208dcc4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct 16-byte message with sentinel identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208dcc4.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int); void *FUN_0208dcc4(char *self) { FUN_02036094(self); FUN_020360a4(self,2,16,16); *(int *)(self+4)=-1; *(int *)(self+8)=-1; self[12]=0; self[13]=0; *(unsigned short *)(self+14)=0; return self; }
