// FUN_0208d380 @ 0x0208d380 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_0208d380 @ 0x0208d380 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve signed slot byte +4; pass signed byte +6 and unsigned byte +7 to resulting object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208d380.txt.
 */
extern void *FUN_02085684(int); extern void FUN_0203bf20(void *,int,unsigned int);
void FUN_0208d380(signed char *self) { void *object=FUN_02085684(self[4]); if(object) FUN_0203bf20(object,self[6],(unsigned char)self[7]); }
