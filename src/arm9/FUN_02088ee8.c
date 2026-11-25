// FUN_02088ee8 @ 0x02088ee8 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02088ee8 @ 0x02088ee8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Pass zero to two owned objects through common helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088ee8.txt.
 */
extern void FUN_020c38f0(void *,int);
void FUN_02088ee8(void **self) { FUN_020c38f0(self[12],0); FUN_020c38f0(self[13],0); }
