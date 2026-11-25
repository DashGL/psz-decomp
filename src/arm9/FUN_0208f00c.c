// FUN_0208f00c @ 0x0208f00c (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_0208f00c @ 0x0208f00c (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy seventeen optional owned buffers and their wrappers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208f00c.txt.
 */
extern void FUN_020ba8c4(void *),FUN_020ba8ac(void *);void FUN_0208f00c(void ***self){int i;for(i=0;i<17;i++)if(self[i]){void *p=*self[i];if(p){if(p){FUN_020ba8c4(p);*self[i]=0;}}if(self[i]){FUN_020ba8ac(self[i]);self[i]=0;}}}
