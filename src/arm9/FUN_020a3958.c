// FUN_020a3958 @ 0x020a3958 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020a3958 @ 0x020a3958 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy components then free owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a3958.txt.
 */
extern void FUN_020306fc(void *),FUN_02076f90(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_020a3958(char *self){FUN_020306fc(self+96);FUN_020306fc(self+88);FUN_020306fc(self+80);FUN_020306fc(self+72);FUN_02076f90(self+48);FUN_020303bc(self);FUN_020ba8ac(self);return self;}
