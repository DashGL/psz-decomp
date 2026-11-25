// FUN_02096c64 @ 0x02096c64 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02096c64 @ 0x02096c64 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize halfword, pair of bytes, minus-one field and zero field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096c64.txt.
 */
extern void FUN_02096c84(void *,void *); void FUN_02096c64(char *self) { *(unsigned short *)self=0; FUN_02096c84(self+2,(void *)0x020f4510); *(int *)(self+4)=-1; *(int *)(self+8)=0; }
