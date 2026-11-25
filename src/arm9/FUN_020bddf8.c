// FUN_020bddf8 @ 0x020bddf8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020bddf8 @ 0x020bddf8 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset peer records then refresh discovery and activity state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bddf8.txt.
 */
extern void FUN_020be204(void *),FUN_020bde30(void *),FUN_020bddd8(void *,int);void FUN_020bddf8(char *self){if(*(void **)(self+3920)){int i;for(i=0;i<64;i++)FUN_020be204(*(char **)(self+3920)+24*i);}FUN_020bde30(self);FUN_020bddd8(self,0);}
