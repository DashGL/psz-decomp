// FUN_02088a7c @ 0x02088a7c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02088a7c @ 0x02088a7c (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy three embedded resources, base state and object base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088a7c.txt.
 */
extern void FUN_020306fc(void *),FUN_020765f8(void *),FUN_020303bc(void *); void *FUN_02088a7c(char *self) { FUN_020306fc(self+88); FUN_020306fc(self+80); FUN_020306fc(self+72); FUN_020765f8(self+48); FUN_020303bc(self); return self; }
