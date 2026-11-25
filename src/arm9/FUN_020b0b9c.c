// FUN_020b0b9c @ 0x020b0b9c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020b0b9c @ 0x020b0b9c (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Notify global resource manager of valid halfword identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0b9c.txt.
 */
extern void FUN_02033fcc(void *,unsigned int),FUN_02037c5c(void *,unsigned int),FUN_02037b88(void *,unsigned int);void FUN_020b0b9c(char *self){void *p=*(void **)0x02108c84;if(p){FUN_02033fcc(p,*(unsigned short *)(self+40));if(*(unsigned short *)(self+42)!=65535)FUN_02037c5c(p,*(unsigned short *)(self+42));if(*(unsigned short *)(self+40)!=65535)FUN_02037b88(p,*(unsigned short *)(self+40));}}
