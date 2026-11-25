// FUN_0208fc48 @ 0x0208fc48 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_0208fc48 @ 0x0208fc48 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check ability and forward three payload words into message.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208fc48.txt.
 */
extern int FUN_0204ddd8(int,int);extern void FUN_0208d6d0(void *,int,unsigned int,int,unsigned int,unsigned int,unsigned int);int FUN_0208fc48(char *self,unsigned int a,unsigned int b,unsigned int c){if(self && FUN_0204ddd8(*(int *)(self+252),12)){FUN_0208d6d0((void *)0x0211a578,*(int *)(self+252),*(unsigned short *)(self+318),12,a,b,c);return 1;}return 0;}
