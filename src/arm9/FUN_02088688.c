// FUN_02088688 @ 0x02088688 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02088688 @ 0x02088688 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate object and initialize with supplied argument if nonnull.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088688.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_020886a0(void *,void *);
void *FUN_02088688(void *arg) { void *object=FUN_020ba894(92); if(object) object=FUN_020886a0(object,arg); return object; }
