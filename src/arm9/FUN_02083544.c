// FUN_02083544 @ 0x02083544 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02083544 @ 0x02083544 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose entry using global helper bounded by current count, null for empty.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083544.txt.
 */
extern void *FUN_020780f4(void); extern unsigned int FUN_0207816c(void *,unsigned int);
unsigned int FUN_02083544(unsigned int *self) { unsigned int count=self[20]; if(count) return self[FUN_0207816c(FUN_020780f4(),count)]; return 0; }
