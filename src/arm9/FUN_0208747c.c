// FUN_0208747c @ 0x0208747c (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0208747c @ 0x0208747c (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release buffer and destroy three embedded objects and base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208747c.txt.
 */
extern void FUN_020ba8c4(void *),FUN_020b053c(void *),FUN_020b0980(void *);void *FUN_0208747c(char *self){void *p=*(void **)(self+6440);if(p){FUN_020ba8c4(p);*(void **)(self+6440)=0;}FUN_020b053c(self+40);FUN_020b053c(self+28);FUN_020b053c(self+16);FUN_020b0980(self);return self;}
