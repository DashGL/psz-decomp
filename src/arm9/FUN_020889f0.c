// FUN_020889f0 @ 0x020889f0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020889f0 @ 0x020889f0 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate object and initialize with supplied argument if nonnull.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020889f0.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_02088a08(void *,void *);
void *FUN_020889f0(void *arg) { void *object=FUN_020ba894(96); if(object) object=FUN_02088a08(object,arg); return object; }
