// FUN_02088b54 @ 0x02088b54 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02088b54 @ 0x02088b54 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Start inactive embedded resource in state one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088b54.txt.
 */
extern int FUN_02030700(void *); extern void FUN_02030808(void *,int,int); void FUN_02088b54(char *self) { if((unsigned char)self[46]==1 && !FUN_02030700(self+88)) FUN_02030808(self+88,1,0); }
