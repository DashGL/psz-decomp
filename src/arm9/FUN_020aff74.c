// FUN_020aff74 @ 0x020aff74 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020aff74 @ 0x020aff74 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy772 bytes from caller source to resolved record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aff74.txt.
 */
extern void *FUN_020aff4c(void *,int); extern void FUN_020655d8(void *,void *,unsigned int); void FUN_020aff74(void *self,int index,void *source) { void *dest=FUN_020aff4c(self,index); FUN_020655d8(source,dest,772); }
