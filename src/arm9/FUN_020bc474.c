// FUN_020bc474 @ 0x020bc474 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020bc474 @ 0x020bc474 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume owned buffer or load existing buffer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc474.txt.
 */
extern void FUN_020bc498(void *,void *),FUN_020bc4dc(void *,void *),FUN_020ba8c4(void *); void FUN_020bc474(char *self) { void *p=*(void **)(self+120); if(p) { FUN_020bc498(self,p); FUN_020ba8c4(*(void **)(self+120)); *(void **)(self+120)=0; } else FUN_020bc4dc(self,*(void **)(self+112)); }
