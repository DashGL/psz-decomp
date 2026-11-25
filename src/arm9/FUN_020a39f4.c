// FUN_020a39f4 @ 0x020a39f4 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020a39f4 @ 0x020a39f4 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance active timer and stop expired component before base update.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a39f4.txt.
 */
extern int FUN_02030700(void *);extern void FUN_02030808(void *,int,int),FUN_0203041c(void *);void FUN_020a39f4(char *self){if((unsigned char)self[46]==2){int count=*(int *)(self+104)+1;*(int *)(self+104)=count;if(count>*(short *)(*(char **)(self+68)+32) && FUN_02030700(self+88))FUN_02030808(self+88,0,1);}FUN_0203041c(self);}
