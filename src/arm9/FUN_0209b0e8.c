// FUN_0209b0e8 @ 0x0209b0e8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0209b0e8 @ 0x0209b0e8 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate 356-byte object and construct with incoming argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209b0e8.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0209b100(void *,void *); void *FUN_0209b0e8(void *arg) { void *p=FUN_020ba894(356); if(p) p=FUN_0209b100(p,arg); return p; }
