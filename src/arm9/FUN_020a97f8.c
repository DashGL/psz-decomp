// FUN_020a97f8 @ 0x020a97f8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020a97f8 @ 0x020a97f8 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance history ring, copy record and mark changed.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a97f8.txt.
 */
extern void FUN_020655d8(void *,void *,unsigned int);void FUN_020a97f8(char *self,void *source){int slot=(*(int *)(self+20)+1+*(int *)(self+4))%*(int *)(self+4);*(int *)(self+20)=slot;FUN_020655d8(source,*(char **)(self+12)+772*slot,772);if(*(int *)(self+16)<*(int *)(self+4))(*(int *)(self+16))++;*(int *)(self+28)=1;}
